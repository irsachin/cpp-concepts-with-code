#include <iostream>
using namespace std;
// example number 123 = 1 , 2, 3 (3 digit)
int main() {
    int num;
    cout<<"Enter an integer :"<<endl; 
    cin>>num;
    int count = 1;
    while (num/=10)
    {
      
      count++;
      
    }
    
    cout<<"The number of digits in a given integer is : "<<count;
    return 0;
}