//Check if a number is positive negetive or zero
//positive numbers > 0  = 1,2,3,4,5... 
//negetive numbers < 0  = -1,-2,-3...
// zero = 0 neither positive nor negetive 

#include <iostream>
using namespace std;
int main()
{
    int num;
cout<<"Enter a number to check positive ,negetive or zero :   ";
cin>>num;
if(num>0)
{
    cout<<"\n the number is positive";
}
else if(num<0)
{
    cout<<"\n the number is negetive";
}
else{
    cout<<"\n the number is zero(neither positive nor negetive)";
}

}