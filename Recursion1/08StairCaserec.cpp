#include<iostream>
using namespace std;
int stair(int n){
    //base case
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;

    // recursive calls 
    return stair(n-1) + stair(n-2)+stair(n-3);
}
int main() {
    int n;
    cout<<"enter number of stairs: ";
    cin>>n;
    cout<<stair(n);

}