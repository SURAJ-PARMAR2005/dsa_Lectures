#include<iostream>
using namespace std;
int main() {
    int m;
    cout<<"enter m: ";
    cin>>m;
    int arr[m][m];
    for(int i = 0; i<m;i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    //to transpose this square matrix without using extra matrix;
     for(int i = 0; i<m;i++){
        for(int j = 0; j<m; j++){
            if(i < j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    for(int i = 0;i<m;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

}