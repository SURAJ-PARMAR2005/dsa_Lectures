#include<iostream>
#include<vector>
using namespace std;
int main() {
    //declaration
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //rows -> 3 0-2
    //columns -> 3  0-2
    // cout<<arr[0][0]<<endl;//if the array is not initialized and if we print the element of then the garbage value will be initialized 
    // arr[0][0] = 1;
    cout<<arr[0][0]<<endl;

    // arr[0][1] = 2;
    cout<<arr[1][1]<<endl;
    cout<<arr[2][2]<<endl;


    // arr[0][2] = 3;
    // arr[1][0] = 4;
    // arr[1][1] = 5;



}