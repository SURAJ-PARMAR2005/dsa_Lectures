#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int a,int b,bool bidir = true){
    graph[a].push_back(b);

    if(bidir) {
        graph[b].push_back(a);
    }

}

void topoDFS(){
    //kahns algo 
    vector<int> indegree(v,0);
    for(int i = 0;i<v;i++){
        for(auto neighbour : graph[i]){
            //i -> neighbour ki edge 
            indegree[neighbour]++;
        }
    }

    queue<int> qu;
    unordered_set<int> visited;
    for(int i = 0;i<v;i++){
        if(indegree[i] == 0){
            qu.push(i);
            visited.insert(i);
        }
    }

    while(not qu.empty()){
        int node  = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbour : graph[node]){
            if(not visited.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour] == 0){
                    qu.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }
}

int main() {
    cout<<"enter np. of verteces: ";
    cin>>v;
    int e;
    cout<<"enter no. of edges: ";
    cin>>e;
    graph.resize(v,list<int> ());
    while(e--){
        int x,y;
        cout<< " enter x and y: ";
        cin>>x>>y;
        add_edge(x,y,false);
    }
    topoDFS();

}