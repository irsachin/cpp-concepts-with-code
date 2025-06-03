//Difference between float and double

#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    float f = 1.123456789;
    double d = 1.123456789;

    cout << fixed << setprecision(9); // will give decimal number to the nine digits
    cout << "Float:  " << f << endl;
    cout << "Double: " << d << endl;

    return 0;
}
