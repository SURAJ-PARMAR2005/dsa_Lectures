#include<iostream>
using namespace std;
int fo(int n,int arr[],int x){
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            if(arr[mid-1] == x){
                hi = mid-1;
            }
            else return mid;
        }
        else if(arr[mid] <x) lo = mid+1;
        else hi = mid-1;
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<fo(n,arr,x);
}