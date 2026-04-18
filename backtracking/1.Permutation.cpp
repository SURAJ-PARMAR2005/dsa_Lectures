#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Permutations(string str,string ans,vector<string> & v){

    if(str.length() == 0){
        v.push_back(ans);
        return;
    }

    for(int i = 0;i<str.length();i++){
        char ch = str[i];

        Permutations(str.substr(0,i) + str.substr(i+1) ,ans+ch,v);
    }   

}

int main() {
    string str;
    cin>>str;
    vector<string> v;
    Permutations(str,"",v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}