#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> & par, int x){
    //return par of x ka group 

    //path compression
    if(par[x] == x) return x;
    return par[x] = find(par,x);
}
void Union(vector<int> & par,vector<int> & size,vector<int> & minmal, vector<int> & maximal, vector<int> & rank ,int & a, int  &b){
    a  = find(par,a);
    b = find(par,b);
    if(rank[a] >= rank[b]){
        rank[a]++;
        par[b] = a;
        size[a] += size[b];
        maximal[a] = max(maximal[a],maximal[b]);
        minmal[a] = max(minmal[a],minmal[b]);

    }
    else{
        rank[b]++;
        par[a]= b;
        size[b] += size[a];
        maximal[b] = max(maximal[a],maximal[b]);
        minmal[b] = max(minmal[a],minmal[b]);
    }
}

int main() {
    int n,m;
    cout<<"enter n and m: ";
    cin>>n>>m;
    vector<int> par(n+1);
    vector<int> rank(n+1,0);
    vector<int> size(n+1,1);
    vector<int> minimal(n+1);
    vector<int>  maximal(n+1);
    for(int i = 0;i<=n;i++){
        par[i] = maximal[i] = minimal[i] = i;
    }

    for(int i = 0;i<= n;i++){
        par[i] = i;
    }

    while(m--){
        string str;
        cout<<"enter your querie: ";
        cin>>str;
        if(str == "Union"){
            int x , y;
            cout<<"Enter x and y: ";
            cin>>x>>y;
            Union(par,size,minimal,maximal,rank,x,y);
        }
        else {
            int x;
            cin>>x;
            x = find(par,x);
            cout<<minimal[x]<<" ";
            cout<<maximal[x]<<" ";
            cout<<size[x]<<" "<<endl;
        }
    }
    return 0;
}