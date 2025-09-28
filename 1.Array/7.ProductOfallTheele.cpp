#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of the arr: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"enter "<<i<<"th ele: ";
        cin>>arr[i];
    }

    //to print the product of all the element:
    int product = 1;
    for(int i = 0; i<n;i++){
        product*=arr[i];
    }
    cout<<"product of all the elements in the array are: "<<product;
}