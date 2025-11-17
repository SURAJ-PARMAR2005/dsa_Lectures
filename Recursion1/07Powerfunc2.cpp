#include<iostream>
using namespace std;
int power(int x, int n){
    if(n == 0) return 1;
    if(n==1) return x;
    int ans;
    if(n % 2 == 0){
         ans = power(x,n/2);
    }
    else{
     ans = power(x,n/2) * x;
    }

    return ans*ans;

}

int main() {
    int x;
    cout<<"enter x :";
    cin>>x;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<power(x,n);
}