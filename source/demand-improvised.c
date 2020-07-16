#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <time.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
int dynamic ( int , float ,int , int, sqlite3*, char*, char*, sqlite3_stmt *,  char * );  // function that creates sql tables and detects events

int main()        //MAIN FUNCTION
 {
 char *err_msg = 0;                                // open database
    sqlite3_stmt *res;
    sqlite3 *db;


    int rc = sqlite3_open("iot.db-2", &db);

    if (rc != SQLITE_OK)
    {

        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);

        return 1;
    }

  /* creating a query for wholedata table creation*/
   char *sql = "CREATE TABLE wholedata("  \
         "ID INTEGER PRIMARY KEY AUTOINCREMENT    ," \
         "SPEED           INT    NOT NULL," \
         "GPS            REAL     NOT NULL," \
         "Brake         INT );";
 /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, 0, 0, &err_msg);
   if( rc != SQLITE_OK ){
   fprintf(stderr, "SQL error: %s\n",err_msg );
      sqlite3_free(err_msg);
   }else
   {
      fprintf(stdout, "Table 1 created successfully\n");
   }
/* Creating a query for criticaldata table creation */
   char *sql1 = "CREATE TABLE criticaldata("  \
         "ID INTEGER  PRIMARY KEY   AUTOINCREMENT  ," \
         "SPEED           INT    NOT NULL," \
         "GPS            REAL     NOT NULL," \
         "Brake         INT );";
 /* Execute SQL statement */
   rc = sqlite3_exec(db, sql1, 0, 0, &err_msg);
   if( rc != SQLITE_OK ){
   fprintf(stderr, "SQL error: %s\n", err_msg);
      sqlite3_free(err_msg);
   }
else
   {
      fprintf(stdout, "Table 2 created successfully\n");
   }
FILE *fp;
    int sp[10], br[10], i, j, n=1;
    float gps[10];
    fp=fopen("iot.txt","r");

    for(i=0; !feof(fp); i++)
    {
     fscanf(fp, "%d %f %d", &sp[i], &gps[i], &br[i]);                 // reading the data from txt file
     dynamic(sp[i], gps[i], br[i],n, db, sql, sql1, res, err_msg);
     n++;
    }
    for(j=0; j<i-1; j++)
    {
        printf("%d %d %f\n", sp[j], br[j], gps[j] );
    }
    fclose(fp);
    return 0;
}

int dynamic ( int speed, float gps,int brake, int n, sqlite3* db, char* sql, char* sql1, sqlite3_stmt * res,char * err_msg )    //Function definition
{

                  struct iot
                          {
                             int speed, brake;
                                    float gps;

                           };
     struct iot e[2];
     e[1].speed=speed;
     e[1].gps=gps;
     e[1].brake=brake;

 /* Create SQL statement */

char *query1 = NULL;
asprintf(&query1, "insert into wholedata(speed, gps, brake) values (%d, %f, %d);", e[1].speed, e[1].gps, e [1].brake );
int rc = sqlite3_prepare_v2(db, query1, -1, &res, 0);
if (rc != SQLITE_OK)
    {

        fprintf(stderr, "Failed to fetch data: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);

        return 1;
    }


/* Execute SQL statement */
int step = sqlite3_step(res);

   if (rc != SQLITE_OK )
   {

        fprintf(stderr, "Failed to create table\n");
        fprintf(stderr, "SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);

    }
    else
    {

        fprintf(stdout, "data inserted to Table successfully\n");
    }
sqlite3_finalize(res);    // free the query
int iden;
int last_id = sqlite3_last_insert_rowid(db);    // getting the latest row id of the sql table created
iden = last_id;
printf("the last row id is %d\n", iden);
 if (iden!=1)
      {
char *query2 = "SELECT Id, speed FROM wholedata WHERE Id = @id";

    rc = sqlite3_prepare_v2(db, query2, -1, &res, 0);

if (rc == SQLITE_OK)

    {

        int idx = sqlite3_bind_parameter_index(res, "@id");
        sqlite3_bind_int(res, idx, iden-1);
     }
 else
   {

        fprintf(stderr, "Failed to execute statement: %s\n", sqlite3_errmsg(db));
   }
 step = sqlite3_step(res);

 e[0].speed = sqlite3_column_int(res, 1);
sqlite3_finalize(res);     // free the query


char *query3 = "SELECT Id, gps FROM wholedata WHERE Id = @id";

    rc = sqlite3_prepare_v2(db, query3, -1, &res, 0);

if (rc == SQLITE_OK)

    {

        int g = sqlite3_bind_parameter_index(res, "@id");
        sqlite3_bind_int(res, g, iden-1);
     }
 int step = sqlite3_step(res);
 e[0].gps = sqlite3_column_double(res, 1);
sqlite3_finalize(res);    // free the query


char *query4 = "SELECT Id, brake FROM wholedata WHERE Id = @id";

    rc = sqlite3_prepare_v2(db, query4, -1, &res, 0);

if (rc == SQLITE_OK)

    {

        int b = sqlite3_bind_parameter_index(res, "@id");
        sqlite3_bind_int(res, b, iden-1);
     }
  step = sqlite3_step(res);

 e[0].brake = sqlite3_column_int(res, 1);
sqlite3_finalize(res);     // free the query

 if(e[0].speed-e[1].speed>50)
       {
/* Create SQL statement */
    char *query5 = NULL;
asprintf(&query5, "insert into criticaldata (speed, gps, brake) values ( %d, %f, %d);", e[1].speed, e[1].gps, e [1].brake);
rc = sqlite3_prepare_v2(db, query5, -1, &res, 0);

if (rc != SQLITE_OK)
    {

        fprintf(stderr, "Failed to fetch data: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);

        return 1;
    }
 /* Execute SQL statement */
int step = sqlite3_step(res);

   if (rc != SQLITE_OK )
   {

        fprintf(stderr, "Failed to create table\n");
        fprintf(stderr, "SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);

    }
sqlite3_finalize(res);     // free the query
}
else if (e[1].brake>3)
      {
/* Create SQL statement */
char *query6 = NULL;
 asprintf(&query6, "insert into criticaldata ( speed, gps, brake) values (%d, %f, %d);", e[1].speed, e[1].gps, e [1].brake);
rc = sqlite3_prepare_v2(db, query6, -1, &res, 0);
 /* Execute SQL statement */
int step = sqlite3_step(res);
sqlite3_finalize(res);     // free the query
}
}
return iden;    // returning the row id
}

