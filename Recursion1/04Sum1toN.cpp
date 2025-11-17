#include<iostream>
using namespace std;

// this method is paramaterised method 
// void sum1toN(int sum, int n){
//     if(n == 0) {
//         cout<<sum<<endl;
//         return;}
//     sum1toN(sum+n,n-1);
// }


//now lets do the same question using return type

int sum(int n){
    if(n == 0) {
        return 0;
    }

    int ans = n + sum(n-1);
    return ans;

}


int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<sum(n);

}