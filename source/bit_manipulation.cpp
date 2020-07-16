#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

long int convert_in_binary(int n){
int rem;
long int num = 0,a=1,m;
//cout << "Enter the number to find the binary equivalent: ";
//cin >> n ;

while (n!=0){

rem = n%2;
num = num + rem*a;
n = n/2;
a = a*10;

}
//cout << num << endl;
return num;
}
int main(){

int a = 12, b = 3;
 int c,f;

c = a | b;
f = convert_in_binary(c);
cout << "The result in the binary is: " << f;

getch();
return 0;
}
