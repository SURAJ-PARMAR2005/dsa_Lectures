#include<iostream>
using namespace std;
void quickSort(int arr[],int si,int ei){
    //5,1,8,2,7,6,3,4
    int pivotIdx = partition(arr,si,ei);
    //4,1,3,2,5,7,8,6      

}
int main() {
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quickSort(arr,0,n-1);
}