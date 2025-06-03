#include <iostream>
using namespace std;
// a>b&c b>a&c c>a&b

int main() {
    int a;
    int b;
    int c;
    cout<<"Please enter three numbers :";
    cin>>a>>b>>c;
if(a>=b && a>=c) // a=5 b=5 c=5
{
    cout<<"the greatest number is : "<<a;
}
else if(b>=a && b>=c)
{
    cout<<"the greatest number is : "<<b;
}
else
{
    cout<<"the greatest number is : "<<c;
}


    return 0;
}