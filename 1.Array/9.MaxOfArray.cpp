#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the value of n: ";
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
// int max = arr[0];
int max = INT8_MIN;
for(int i = 1;i<n;i++){
    if(max<arr[i]) max = arr[i];
}
cout<<"maximum element is : "<<max;

//to find the max element from the array 
}