#include<bits/stdc++.h>
using namespace std;

bool isPal(int i, int j, string &str){
    int n = str.length();
    while(i<j){
        if(str[i] == str[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
}

int f(int i,int n,string & str){
    if(i == n) return 0;
    int minCost = INT8_MAX;
    for(int j = i;j<n;j++){
        if(isPal(i,j,str)){
            int cost = 1 + f(j+1,n,str);
            minCost = min(cost,minCost);
        }
    }
    return minCost;
}

int main(){
    string str;
    cout<<"enter str: ";
    cin>>str;
    int n = str.length();
    cout<<f(0,n,str)-1<<"\n";
}