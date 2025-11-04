#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows: ";
    cin>>n;
    int m;
    cout<<"enter no. of columns: ";
    cin>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>arr[i][j];
        }
    }

    //find the largest num
    int sum = 0;
     for(int i = 0; i<n;i++){
        for(int j = 0;j<m;j++){
        sum += arr[i][j];
        }
        cout<<endl;
    }

    cout<<"sum of elements is: "<<sum<<endl;



}