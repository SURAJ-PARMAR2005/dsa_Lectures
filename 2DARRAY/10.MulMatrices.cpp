#include<iostream>
#include<vector>
using namespace std;
int main() {
   int m;
   cout<<"enter rows of first matrix: ";
   cin>>m;
    int n;
   cout<<"enter column of first matrix: ";
   cin>>n;

    int p;
   cout<<"enter rows of second matrix: ";
   cin>>p;
    int q;
   cout<<"enter column of second matrix: ";
   cin>>q;

   if(n == p){
        int arr[m][n];
        int brr[p][q];
        cout<<"enter elements of first matrix: ";
        for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
                cin>>arr[i][j];
            }
        }

        cout<<"enter elements of second matrix: ";
        for(int i = 0; i<p;i++){
            for(int j = 0; j<q;j++){
                cin>>brr[i][j];
            }
        }

        //resultant matrix
        int res[m][q];
        for(int i= 0 ; i<m;i++){
            for(int j = 0 ; j<q;j++){
                res[i][j] = 0;
               for(int k = 0; k<p;k++){
                res[i][j] +=  arr[i][k]*brr[k][j];
               }
            }
        }

        //print the resultant matricesx
        for(int i = 0; i<m;i++){
            for(int j = 0; j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
   }
   else {
    cout<<"cant be multiplied babes";
   }
}