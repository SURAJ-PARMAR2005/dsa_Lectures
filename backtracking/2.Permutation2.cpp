#include<iostream>
#include<string>
#include<unordered_set>
using namespace std ;

void Permutation(string str,int i){
    if(i == str.length() - 1){
        cout<<str<<"\n";
        return;
    }

    unordered_set<int> s;
    for(int j = i;j<str.length();j++){
        if(s.find(str[j]) != s.end()) continue;
        s.insert(str[j]);
        swap(str[j],str[i]);
        Permutation(str,i+1);
        swap(str[j],str[i]);
    }
}

int main() {
    string str = "aba";
    Permutation(str,0);
    return 0;
}