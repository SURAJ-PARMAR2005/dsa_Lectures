#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    string str[n];
    for(int i = 0 ; i<n;i++){
        cin>>str[i];
    }

    //update all the even positions to a 
    for(int i = 0; i<n;i++){
        if(i%2 == 0){
            str[i] = 'a';
        }
    }

    for(int i = 0;i<n;i++){
        cout<<str[i];
    }
}