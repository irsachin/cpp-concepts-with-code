
// check an integer to be even or odd
// even numbers = Divided by 2 and remainder is zero  = 0,2,4,6,8...
// odd numbers = all the numbers expect even numbers = 1,3,5,7

#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter an integer number to be check even or odd : \n";
cin>>num;

if(num%2==0){
    cout<<"The given number  in even \n";
}
else{
    cout<<"the number is odd";
}

}