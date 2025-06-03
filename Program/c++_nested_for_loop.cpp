#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 4; i++) //1 = 2 =3
  {
    for (int j = 1; j <= 4; j++) //1 2 3 4 =1 2 3 4= 1 2 3 4
    {
      cout << i * j << " "; //1234 //2468 //36912
    }
    cout << "\n";
  }
}