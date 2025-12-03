#include<iostream>
using namespace std;
int kth(int n,int k){
    if(n == 1){
        return 0;
    }

    if(k%2 == 0){
       int prevAns = kth(n-1,k/2);
       if(prevAns == 1) return 0;
       else return 1;
    }
    else{
        int ans = kth(n-1,k/2+1);
        return ans;
    }
}
int main() {
	int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<kth(n,k);
	return 0;
}