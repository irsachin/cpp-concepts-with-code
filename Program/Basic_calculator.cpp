#include <iostream>
using namespace std;
//+-*/ operator num1 num2

int main() {
    double num1,num2;
    cout<<"Please Enter two numbers : "<<endl;
    cin>>num1>>num2;


    char operation;
    cout<<"Enter Operator (+ , - , / , * ) : ";
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<" \n Result is : "<<(num1+num2)<<endl;
        break;
    case '-':
        cout<<" \n Result is : "<<(num1-num2)<<endl;
        break;
    case '*':
        cout<<" \n Result is : "<<(num1*num2)<<endl;
        break;
    case '/':
     if(num2!=0){
         cout<<" \n Result is : "<<(num1/num2)<<endl;
     }
        else{
            cout<<"Error ! division by zero"<<endl;
        }
        break;
    
    default:
    cout<<"Invalid Operator ";
        break;
    }
    
    return 0;
}