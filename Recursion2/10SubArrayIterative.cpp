#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of arr: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    //print sub arr
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            for(int k =i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
}