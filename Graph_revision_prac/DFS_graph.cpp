#include<bits/stdc++.h>
using namespace std;

unordered_set<int> visited;
vector<vector<int>> res;
vector<int> path;

void dfs(vector<list<int>> &graph, int target, int src){
    for(auto ele : graph[src]){
        if(ele == target){
            path.push_back(src);
            path.push_back(target);
            res.push_back(path);
            path.pop_back();
            path.pop_back();
            
        }
    }
    path.push_back(src);
    visited.insert(src);
    for(auto neighbour : graph[src]){
        if(!visited.count(neighbour)){
         path.push_back(neighbour);
         dfs(graph,target,neighbour);
        }
    }
    return;
}

void add_edge(vector<list<int>> & graph, int src, int des, bool bidir = true){
    graph[src].push_back(des);
    if(bidir){
        graph[des].push_back(src);
    }
}

void display_paths(){
    for(int i = 0;i<res.size();i++){
        for(int j = 0;j<res[0].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main(){
    int v;
    cout<<"enter v : ";
    cin>>v;
    int e;
    cout<<"enter e : ";
    cin>>e;
    vector<list<int>> graph(v);
    while(e--){
        int s , d;
        cout<<"enter s and d : ";
        cin>>s>>d;
        add_edge(graph,s,d);
    }
    int src,tar;
    cout<<"enter starting node and target node: ";
    cin>>src>>tar;
   
    dfs(graph,tar,src);
    display_paths();
}