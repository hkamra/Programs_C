#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include <iomanip> // Directory for I/O manipulation like: setprecision
#include <fstream> // Directory used for file I/O

using namespace std;

void sum_of_two(){
int a,b,c;
cout << "Enter the value of a and b: \n";
cin >> a >> b;
c = a + b;
cout << "The sum of the two number is: " << c;
}

void input_a_string(){
string name = "" ;
cout << "Enter your name\n";
cin >> name;
cout << name;
}

void multiply_two_numbers(){
int a,b;
cout << "Enter the value of a and b: " << endl;
cin >> a >> b;
cout << "The multiplication of the two number entered is: " << a*b;

}

void infinite_for_loop(){

int i;
//static_cast<int>(i); // Way of type casting in C++
for (i=0;i<3;i++){  // The loop is infinite because the limit of char is -127 to 128. The loop will start again after 128
    cout << i << endl;
}
}

void conversion_of_feet_to_centimeters(){

int feet;
int inches;
float h_inches;
float h_centi;

cout << "You have to enter the height in the feet and the inches separated by a separate line" << endl;
cout << "Enter the height in feet " << endl;
cin >>  feet;

cout << "Enter the height in inches " << endl;
cin >> inches;

h_inches = (12 * feet) + inches ;
h_centi = h_inches * 2.54 ;

cout << "Your height in inches is: " << h_inches << endl << "Your height in centimeters is: " << h_centi << setprecision(2) ;
} // setprecision is used to get decimal value

void To_find_the_string_length(){

string str = "";
int str_length;

cout << "Enter the string to check it's length" << endl ;
getline (cin,str); // To input the string
//cout << str;
str_length = str.length();  // calling a string length function

cout << "The length of the given string is: " << str_length;

}

void To_use_data_manipulation_operator(){

int j;

cout << setfill('*');
for (int i=30;i>0;i--){
cout << setw(i) << "*" << endl;
}
}

void to_define_the_variable_with_the_different_name(){
const int a = 5;
const int b = 6;

typedef int i;  // Replaced int datatype with the variable i

i c ;
c = a + b;
cout << "The sum of the numbers is: " << c;
}

void arrange_the_elements_of_array_in_ascending_order(){

int arr_size,arr[100];

cout << "Enter the number of elements in the array: " ;
cin >> arr_size;

cout << "Enter the values in the array separated by spaces: " << endl;

for (int i=0;i<arr_size;i++){
    cin >> arr[i];
}

/*for (int j=0;j<arr_size;j++){
    cout << arr[j] << " ";
}*/

for (int a = 0;a<arr_size;++a){

   for (int b = a + 1;b<arr_size;++b){

    if (arr[a] > arr[b]){

        int v;
        v = arr[a];
        arr[a] = arr[b];
        arr[b] = v;
    }
   }

}

cout << "Array in the ascending order is: ";
for (int u = 0;u<arr_size;u++){
    cout << arr[u] << " " ;
}
}

void second_largest_element_in_the_array(){

int arr_size,arr[100];

cout << "Enter the number of elements in the array: " ;
cin >> arr_size;

cout << "Enter the values in the array separated by spaces: " << endl;

for (int i=0;i<arr_size;i++){
    cin >> arr[i];
}

/*for (int j=0;j<arr_size;j++){
    cout << arr[j] << " ";
}*/

for (int a = 0;a<arr_size;++a){

   for (int b = a + 1;b<arr_size;++b){

    if (arr[a] > arr[b]){

        int v;
        v = arr[a];
        arr[a] = arr[b];
        arr[b] = v;
    }
   }

}

cout << "The second largest element in the array is: " << arr[arr_size - 2] ;

}

int main(){
//cout << "C++ is FUN! Let's play with it.\n";
//sum_of_two();
//input_a_string();
//multiply_two_numbers();
//infinite_for_loop();
//conversion_of_feet_to_centimeters();
//To_find_the_string_length();
//To_use_data_manipulation_operator();
//to_define_the_variable_with_the_different_name();// use of typedef
//arrange_the_elements_of_array_in_ascending_order();
second_largest_element_in_the_array();
getch();
return 0;

}
