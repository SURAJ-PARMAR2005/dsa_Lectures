#include<iostream>
using namespace std;
int main() {
    int m;
    cout<<"enter m: ";
    cin>>m;
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[m][n];
    for(int i = 0 ; i<m;i++){
        for(int j = 0; j<n;j++){
            cin>>arr[i][j];
        }
}
int arr1[n][m];
for(int i = 0; i<n;i++ ){
    for(int j = 0 ; j<m; j++){
        // cout<<arr[j][i]<<" ";
        arr1[i][j] = arr[j][i];
    }
}

for(int i = 0; i<n; i++){
    for(int j = 0 ; j< m ;j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
}

}