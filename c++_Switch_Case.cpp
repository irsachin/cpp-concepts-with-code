#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an integer :";
    cin>>num;
    switch(num%2){

        case 0:
        {
        cout<<"The number is even";
        break;
    }
        default:{
            cout<<"the number is odd";
        }
    }
    
}
