// Reverse a number
// for example num = 123 => rev_num = 321

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter a number to reverse: ";
    cin >> number;

    int ReverseNum = 0;

    while (number) {
        ReverseNum = ReverseNum * 10 + number % 10;
        number /= 10;
    }

    cout << "The reversed number is: " << ReverseNum;

    return 0;
}
