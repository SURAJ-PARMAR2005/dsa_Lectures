#include<iostream>
using namespace std;
// void printMax(int arr[],int idx,int n,int maxEle){
//     if(idx == n){
//         cout<<maxEle;
//         return;
//     }

    
//     if(maxEle < arr[idx]) maxEle = arr[idx];

//     printMax(arr,idx+1,n,maxEle);

// }

int MaxInArray(int arr[],int n, int idx){
    if(idx == n) return INT8_MIN;
    return max(arr[idx],MaxInArray(arr,n,idx+1));
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int maxEle = 0;
//    printMax(arr,0,n,INT8_MIN);
    cout<<MaxInArray(arr,n,0);
}