#include<iostream>
using namespace std;
int febo(int n){
    if(n == 1 || n == 0) return 1;
    return  febo(n-1) + febo(n-2);
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<febo(n);
}