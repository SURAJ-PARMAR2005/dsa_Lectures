#include<iostream>
using namespace std;
int main() {
    // int arr[] = {1,2,3,45,64,65};
    // // cout<<arr[4];

    // for(int i = 0; i<=5;i++){
    //     cout<<arr[i]<<" ";
    // }


    //taking input of array from user ;
    int arr[7];
  for(int i = 0; i<8;i++){
    cout<<"enter "<<i<<"th element of arr: ";
    cin>>arr[i];
  }
  
  for(int i = 0;i<8;i++){
    cout<<arr[i]<<" ";
  }

}