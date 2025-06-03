                             //C++ Variables
// Variables are containers for storing data values.
// In C++, there are different types of variables (defined with different keywords).
// syntax of variable declaration -  type VariableName = Value;
#include<iostream>
using namespace std;
int main(){

 // Integer (whole number without decimals)
int myNum = 5;              

// Declare Multiple Variables
int x = 10 ,y=20 ,z=30;

//Changing Variable Values (changed value of x from 10 to 20
x =20; 

double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = false;      // Boolean (true= 1 or false= 0)

//Display variable and there values

cout<<"the value of myNum is "<<myNum<<endl;
cout<<x+y+z<<"\n";
cout<<"the value of myFloatNum is "<<myFloatNum<<endl;
cout<<"the value of myLetter is "<<myLetter<<endl;
cout<<"the value of myText is "<<myText<<endl;
cout<<"the value of myBoolean is "<<myBoolean<<endl;
}
