#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int find(vector<int> & par, int a){
    return par[a] = (par[a] == a) ? a : find(par,par[a]); 
}

void Union(vector<int> & par, vector<int> & rank, int a, int b){
    a = find(par,a);
    b = find(par,b);
    if(a == b) return;
    if(rank[a] >= rank[b]){
        rank[a]++;
        par[b] = a;
    }
    else{
        rank[b]++;
        par[a] = b;
    }
    return;
}

struct Edge {
    int src;
    int dest;
    int wt;
};

bool cmp(Edge e1, Edge e2){
    return e1.wt < e2.wt;
}

ll kruskals(vector<Edge> & input,int n, int e){
    sort(input.begin(),input.end(),cmp);
    vector<int> par(n+1);
    vector<int> rank(n+1,1);
    for(int i = 0;i<=n;i++){
        par[i] = i;
    }
    ll ans = 0;
    int edgeCount = 0;//n-1
    int i = 0;
    while(edgeCount < n-1 && i< input.size()){
       Edge curr = input[i]; // because input is sorted so we will get min wt edge 
       int srcPar = find(par,curr.src);
       int destPar = find(par,curr.dest);
       if(srcPar != destPar){
        //include edge as this will not make cycle 
        Union(par,rank,srcPar,destPar);
        ans += curr.wt;
        edgeCount++;
       }
       i++;//dost matter we picked or not , go to next node 
    }
    return ans;
}

int main() {
    int n,e;
    cout<<"enter n and e: ";
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i = 0;i<e;i++){ 
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }

    cout<<kruskals(v,n,e)<<"\n";
    return 0;

}