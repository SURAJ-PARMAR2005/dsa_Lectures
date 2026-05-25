#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> & par, int x){
    //return par of x ka group 

    //path compression
    if(par[x] == x) return x;
    return par[x] = find(par,x);
}
void Union(vector<int> & par, vector<int> & rank ,int a, int b){
    a  = find(par,a);
    b = find(par,b);
    if(rank[a] >= rank[b]){
        rank[a]++;
        par[b] = a;
    }
    else{
        rank[b]++;
        par[a]= b;
    }
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
        string str;
        cin>>str;
        if(str == "union"){
            int x , y;
            cin>>x>>y;
            Union(par,rank,x,y);
        }
        else {
            int x;
            cin>>x;
            cout<<find(par,x);
        }
    }
    return 0;
}