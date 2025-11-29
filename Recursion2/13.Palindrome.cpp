#include<iostream>
using namespace std;
bool isPal(string s , int i, int j){
    if(i>j){
        return true;
    }
    if(s[i] != s[j]) return false;
    else return isPal(s,i+1,j-1);
}
int main() {
    string s;
    cin>>s;
    cout<<isPal(s,0,s.length()-1);
}