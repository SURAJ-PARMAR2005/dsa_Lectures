#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

vector<vector<int> > result;
vector<list<int> > graph;
unordered_set<int> visited;
int v;
void add_edge(int src, int dest ,  bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void bfs(int src, int dest, vector<int> & dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v,INT8_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while(!qu.empty()){
        int curr = qu.front();
        cout<<curr<<" ";
        qu.pop();
        for(auto neigbour : graph[curr]){
            if(!visited.count(neigbour)){
                qu.push(neigbour);
                visited.insert(neigbour);
                dist[neigbour] = dist[curr] +1 ;
            }
        }

    }
cout<<endl;
}


int main() {
 cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    visited.clear();
        while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x , y;    
    cin>> x>> y;
     vector<int> dist;
     bfs(x,y,dist);
    for(auto ele : dist){
        cout<<ele<<" ";
    }


}