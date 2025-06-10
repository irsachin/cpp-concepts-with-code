// Print a multiplication table using input number form user 

#include <iostream>
using namespace std;

int main() {
    int num;
    int tab_num;
    cout<<"Enter a number which table you want to print";
    cin>>tab_num; // dynamic table create 
for(int num=1; num<=10; num++) // 1,2,3,4,5,6,7,8,9,10
{
 cout<<"\n"<< num*tab_num<<endl;
}
    return 0;
}