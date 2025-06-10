#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout << "Enter two numbers";
    cin >> num1 >> num2;
    // opration + - * /
    char choice;
    cout << "Enter your choice with operator (+ - * /)";
    cin >> choice;

    switch (choice) //
    {
    case '+':
        cout << "Result is : " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result is : " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result is : " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result is : " << num1 / num2 << endl;
        }
        else{
            cout<<"Divison By zero";
        }
        break;

    default:
    cout<<"Error ! please enter correct choice operator";
        break;
    }

    return 0;
}