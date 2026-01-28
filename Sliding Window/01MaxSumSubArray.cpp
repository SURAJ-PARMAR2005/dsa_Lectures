#include<iostream>
using namespace std;
int main() {
    int arr[] ={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    // int maxSum = INT8_MIN;
    int maxIdx = -1;
    // for(int i = 0;i<=n-k;i++){
    //     int sum = 0;
    //     for(int j = i;j<i+k;j++){
    //        sum += arr[j];
    //     }
    //     if(maxSum<sum){
    //         maxSum = sum;
    //         maxIdx = i;
    //     }
        
    // }
    int prevSum = 0;
    for(int i = 0;i<k;i++){
        prevSum += arr[i];
    }

    int maxSum = INT8_MIN;
    int i = 1;
    int j = k;
    while(j<n){
        int currSum = prevSum + arr[j] - arr[i-1];
        if(maxSum<currSum){
            maxSum = currSum;
            maxIdx = i;
        }
        i++;
        j++;
        prevSum = currSum;
    }

    //tc: o(n)
    cout<<maxSum<<endl;
    cout<<maxIdx<<endl;

}
