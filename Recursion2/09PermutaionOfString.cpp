#include<iostream>
using namespace std;
void permutation(string org,string ans){
    if(org == ""){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0;i<org.length();i++){
        char ch = org[i];
        string  left = org.substr(0,i);
        string right = org.substr(i+1);
        permutation(left+right,ans+ch);
    }
}
int main() {
    string str;
    cin>>str;
    int n = str.length();
    permutation(str,"");
}