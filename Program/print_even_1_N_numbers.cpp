//print all even number from 1 - 100
// even nummber number%2 == 0;

#include <iostream>
using namespace std;

int main() {
    for(int num=1; num<=100; num++) // loop will go 1 to 100 times 
    {
      if(num%2==0)   //even numbers 
      {
        cout<<num<<endl;   // it will print only even numbers 
      }
    }
    return 0;
}
