#include<iostream>
using namespace std;
// void print(int n){
// if(n == 1) {
//     cout<<n<<endl;
//     return;
// }
// cout<<n<<endl;
// print(n-1);
// }
// int main(){
// int n;
// cout<<"enter n:";
// cin>>n;
// print(n);
// }



// print 1 to n using extra parameter

// void print(int i,int n){
//     if(i>n) return;
// cout<<i<<endl;
// print(i+1,n);

// }
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     print(1,n);
// }


//without using extra parameter

void print(int n){
    if(n == 0) return;
print(n-1);
cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    print(n);
}