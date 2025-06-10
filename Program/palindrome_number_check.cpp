#include <iostream>
using namespace std;
// palindrome number = a number is same from front and back  121, 1001, 1221
int main()
{
    int num;
    cout << "Enter a number to check palindrome or not :";
    cin >> num;
    int ref_num = num;

    int reverse_num = 0;
    while (ref_num)
    {
        reverse_num = reverse_num * 10 + ref_num % 10; // 0 + last digit as remainder 121%10 = 1
        ref_num = ref_num / 10;                        // 121 / 10 = 12
    }
    // cout<<"the reverse number of given number is "<<reverse_num; // for reverse number
    if (num == reverse_num)
    {
        cout << " This is a palindrome number";
    }
    else
    {
        cout << " not a palindrome number";
    }

    return 0;
}