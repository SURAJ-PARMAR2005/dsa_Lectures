#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter s: ";
    getline(cin,s);
    string t;
    cout<<"enter t: ";
    getline(cin,t);

    //to check if these strings are anagram or not 

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s == t){
        cout<<"Yes";
    }

    else cout<<"No";
}