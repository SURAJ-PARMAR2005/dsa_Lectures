#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int n = str.length();
    string secondHalf = str.substr(n/2);
    reverse(secondHalf.begin(),secondHalf.end());
    cout<<secondHalf;
}