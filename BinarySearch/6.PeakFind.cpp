#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"n: ";
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int lo = 0;
    int hi = n-1;
    int idx = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]> arr[mid-1]){
            idx = mid;
            break;
        }
        else if(arr[mid]>arr[mid+1]) hi = mid-1;
        else lo = mid+1;
    }
    cout<<idx;
}