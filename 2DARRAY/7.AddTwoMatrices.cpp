#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    int m;
    cout<<"m: ";
    cin>>m;
    int mat1[n][m];
    int mat2[m][n];
    // int mat3[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }

    cout<<"enter for mat2: ";
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat2[i][j];
        }
    }

          for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           mat1[i][j] = mat1[i][j] + mat2[i][j]; 
        }
    }

          for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
}