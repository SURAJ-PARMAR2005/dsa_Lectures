#include<bits/stdc++.h>
using namespace std;

int febo(vector<int> & dp,int n){
    if(n == 0 || n == 1) return n;
    if(dp[n] != -1){ // step 2
        return  dp[n];
    }

    return dp[n] = febo(dp,n-1) + febo(dp,n-2); // step 1

}

int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<"nth febonacci number is : "<<febo(dp,n);

}