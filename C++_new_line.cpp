           
           // New Line
// \n = for break the line (Backslash n character)
// endl = for break the line (endl manipulator)
//Both \n and endl are used to break lines. However, \n is most used.

#include<iostream>
using namespace std;
int main()
{
    cout<<"This is First line"<<endl; //it will end the line 
    cout<<"This is Second Line"<<"\n"; //it will end the line 
    cout<<"This is Third Line"<<"\n \n"; //1st \n will end the line & 2nd \n create a black line
    cout<<"This is Fourth Line";
    return 0;
}