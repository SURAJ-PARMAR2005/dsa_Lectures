#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx == n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);

}
int main() {
    int arr[] = {12,34,23,234,56,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}