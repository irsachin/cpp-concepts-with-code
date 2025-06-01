// marks 0-100
// 90 -100 =A grade
// 80 -89 = B grade
// 70 - 79 = C grade
// 60 - 69 = D grade
// 33 - 59 = E grade
// 0 -32 = Fail

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter an integer between 0 - 100 :=";
    cin>>num;
    if(num<0 || num >100)
    {
        cout<<"Error , Please Enter a integer  between 0 to 100 :";
    }
    else if(num>=90)
    {
        cout<<"Your Grade is A ";
    }
    else if(num>=80)
    {
        cout<<"Your Grade is B";
    }
    else if(num>=70)
    {
        cout<<"Your Grade is c";
    }
    else if(num>=60)
    {
        cout<<"Your Grade is D";
    }
    else if(num>=33)
    {
        cout<<"Your Grade is E";
    }
    else
    {
        cout<<"SOorry You are Fail !";
    }
return 0;
    
}