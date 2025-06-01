// C++ Conditional statments

// C++ if else
#include <iostream>
using namespace std;
int main()
{

    // if Statement = Use the if statement to specify a block of C++ code to be executed if a condition is true.
    // syntax = if (condition)
    //    {
    //     block of code if exicuted true
    //    }

    int x = 10; //
    // if (x > 9)
    // {
    //     cout << "The value of x is greater than 9 \n";
    // } // else = if our if condition is not true
    // else
    // {
    //     cout << "Your if statement is wrong \n ";
    // }

    // else if(conditon){code to be exicute}

    if (x > 15)
    {
        cout << "x is greater then 15 \n";
    }
    else if (x == 15)
    {
        cout << "x is equl to 15 \n";
    }
    else
    {
        cout << "x is not equal or nor greater than 15 \n";
    }
//voting eligiblity.
int MyAge;
int VotingAge=18;
cout<<"Enter Your Age \n";
cin>>MyAge;
if(MyAge>=VotingAge){
    cout<<"you are eligible for the voting \n";
}
else{
    cout<<"Your are not eligible for the voting \n ";
}




return 0;
}