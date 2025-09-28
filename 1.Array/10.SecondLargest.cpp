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

//Step = find max;
int max = INT8_MIN;
for(int i = 0; i<n;i++){
    if(max<arr[i]) max = arr[i];
}

//find second max;
int second_max = arr[0];
for(int i = 1; i<n;i++){
    if(second_max<arr[i]&& arr[i] != max) second_max = arr[i];
}
 cout<<"second largest element in the array is : "<<second_max;


}