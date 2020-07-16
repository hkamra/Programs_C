#include <iostream>
#include <string>
using namespace std;

int main() {
   /* string line;
    while (getline(cin, line)) {
        cout << line << endl;
    }*/

    int N,p,q;

   // cout << "Enter the value of the Integer N" ;
    cin >> N;
  //  cout << "Enter the first integer: ";
    cin >> p;
  //  cout << "Enter the second ineteger: ";
    cin >> q;

    for (int i=1; i <= N; i++){

if (i == N){
        if (i%p == 0 || i%q ==0){
            cout << "OUT";
            if (i == p || i == q){
                cout  << "THINK";
            }

        }

        else if (i == p || i == q || ((i-10) == p) || ((i-10) == q)){
                cout << "THINK" ;
            }


            else {
                cout << i  ;
            }


}
      else  if (i%p == 0 || i%q ==0){
            cout << "OUT";
            if (i == p || i == q){
                cout  << "THINK";
            }
            cout << ",";
        }

        else if (i == p || i == q || ((i-10) == p) || ((i-10) == q)){
                cout << "THINK" << ",";
            }


            else {
                cout << i << "," ;
            }

        }
    }
