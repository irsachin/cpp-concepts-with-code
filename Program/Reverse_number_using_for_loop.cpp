#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number for the reverse : ";
    cin>>num;
    int ReverseNum=0;
    for(; num!=0;num/=10)
    {
        ReverseNum = ReverseNum *10 + num%10;
    }

    cout<<"The reverse num is :"<<ReverseNum;
    return 0;
}