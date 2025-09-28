#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"enter "<<i<<"th ele: ";
        cin>>arr[i];
    }

    //to print the sum of all the elements of the array: 
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum of all the elements of the array are: "<<sum<<endl;
}