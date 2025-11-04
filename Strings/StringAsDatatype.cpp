#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str  = "Suraj Parmar";//13 size ka character array h ye include \0
    // cout<<str[0];

    string s;
    // cin>>s;//work only if given string has no spaces

    getline(cin,s);
    cout<<s;
}