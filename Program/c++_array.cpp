// C++ array

#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 10, 20, 10, 20};
    // create a arr = type arr_name [num_values] = {values seprated by commasa}
    // how to access a value in an array
    cout << "Before the value of index 3 : " << arr[3] << endl;
    // update a value in array
    arr[3] = 20;
    cout << "After updating the value of index 3 : " << arr[3]<<endl;
    cout<<"index 5 value : "<<arr[5] <<endl;

    // by default it will take 0 
    arr[5]=100;
    cout<<"index 5 value :"<<arr[5]<<endl;


    //loop on array
    int myNumbers[] = {10, 20, 30, 40, 50};
for (int i = 0; i < 3; i++) {
  cout << myNumbers[i] << "\n";
}



    return 0;
}