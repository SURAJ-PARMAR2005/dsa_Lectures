#include<iostream>
#include<vector>
using namespace std;
int main(){
   int m;
   cout<<"enter m: ";
   cin>>m;
   int n;
   cout<<"enter n: ";
   cin>>n;
   int arr[m][n];
   for(int i = 0;i<m;i++){
    for(int j = 0;j<n;j++){
        cin>>arr[i][j];
    }
   } 

  cout<<endl;

   //to print this into spiral format


    int minr = 0;
   int minc = 0;
   int maxr = m-1;
   int maxc = n-1;

   while(maxr>=minr &&  maxc>=minc){
    //right
    for(int j= minc ; j<=maxc;j++){
        cout<<arr[minr][j]<<" ";
    }
    minr++;
    if(minr>maxr || minc>maxc) break;

    //down
    for(int i = minr;i<=maxr;i++){
        cout<<arr[i][maxc]<<" ";
    }
    maxc--;
    if(minr>maxr || minc>maxc) break;


    //left
    for(int j = maxc;j>=minc;j--){
        cout<<arr[maxr][j]<<" ";
    }
    maxr--;
    if(minr>maxr || minc>maxc) break;


    //up

    for(int i = maxr;i>=minr;i--){
        cout<<arr[i][minc]<<" ";
    }
    minc++;
    if(minr>maxr || minc>maxc) break;

   }
}