#include<iostream>
using namespace std;
int main() {
    int m;
    cout<<"enter no. of rows: ";
    cin>>m;
     int n;
    cout<<"enter no. of columns: ";
    cin>>n;
    int arr[m][n];
    //taking input now from the user
    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
// printing the array  

      for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}