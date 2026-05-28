// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
int find(vector<int> & par, int x){
    //return par of x ka group 

    //path compression
    return par[x] = (par[x] == x) ? x : find(par,par[x]);
}
bool Union(vector<int> & par, vector<int> & rank ,int a, int b){
    a  = find(par,a);
    b = find(par,b);
    if(a == b) return true;
    if(rank[a] >= rank[b]){
        rank[a]++;
        par[b] = a;
    }
    else{
        rank[b]++;
        par[a]= b;
    }
    return false;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> par(n+1);
    vector<int> rank(n+1,0);

    for(int i = 0;i<= n;i++){
        par[i] = i;
    }

    while(m--){
      
            int x , y;
            cin>>x>>y;
           bool b =  Union(par,rank,x,y);
           if(b) cout<<"Cycle detected";
    }
    return 0;
}