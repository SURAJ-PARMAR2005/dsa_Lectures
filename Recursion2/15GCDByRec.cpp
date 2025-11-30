#include<iostream>
using namespace std;
int HCF(int a,int b){
    int r = b % a;
    if(r == 0) return a;
    else{
        HCF(r,a);
    }
}
int main() {
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    cout<<HCF(a,b);
    
}