// ofstream - a class which is used to write to a text file
//ifstream - a class which is used to read from a text file
// fstream - a class which is used to do both read from a file and write to a file
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    //ofstream file_("CPP.txt");
    //if (file_.is_open()){                     // Just to make sure that the file is open. Other way is file_.open("CPP.txt");

    //file_ << "Fuck You" << endl << "Fuck You";
    //}
    //file_.close();

    /**
    string line_ ;
    int counter = 0;

    long double a;

    ifstream file_("Bank0Data.txt");
    if(file_.is_open()){

            while(file_){
            file_ >> a;
            cout << a << endl;
            counter++;
            }
    cout << "Number of loops is: " << counter;
    file_.close();
    }
    **/

    string line_ ;
    int counter = 0;

    string arr[2500];

    long double a;

    ifstream file_("Bank0Data.txt");
    if(file_.is_open()){

            while(getline(file_,line_)){
            cout << line_ << endl;
            counter++;
            }

    cout << "Number of loops is: " << counter;
    file_.close();
    }
    cin.get();
    return 0;

}
