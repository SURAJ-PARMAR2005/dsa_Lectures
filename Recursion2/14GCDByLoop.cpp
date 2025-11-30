#include<iostream>
using namespace std;
int GCD(int a,int b){
   for(int i = min(a,b);i>=2;i--){
    if(a%i == 0 && b%i == 0) return i;
   }
   return 1;

}
int main() {
    int a ;
    cout<<"enter a: ";
    cin>>a;
    int b ;
    cout<<"enter b: ";
    cin>>b;
    cout<<GCD(a,b);
}