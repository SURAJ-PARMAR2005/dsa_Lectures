#include<iostream>
using namespace std;
int factorial(int n){
    //base case
   
    if(n == 1 || n == 0){
        return 1;
    }

    //recursive call
    int fact = n * factorial(n-1);
    return fact;


}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<factorial(n);
}