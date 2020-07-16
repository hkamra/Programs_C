#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include <iomanip> // Directory for I/O manipulation like: setprecision
#include <fstream>

using namespace std;

class A {

public :
    int a,b,c;

void multiply(int , int );
void print();


};


class B: public A  // Inheritance where class B is a derived class from class A and represents a public inheritance
{




};

void A::multiply(int a , int b){

c = a*b;

}

void A::print() {

cout << c << endl;

}

int main(){

B obj;

obj.multiply(3,5);

obj.print();

getch();
return 0;
}
