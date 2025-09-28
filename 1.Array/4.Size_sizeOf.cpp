#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,4,5,3,4,34,23,523,2};
    int size = sizeof(arr)/sizeof(arr[0]);//this returns the no. of element in the array  
    cout<<size;

}