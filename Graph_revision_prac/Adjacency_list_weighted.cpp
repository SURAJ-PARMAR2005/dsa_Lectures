#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<list<pair<int,int>>> & graph, int src, int dest,int wt, bool bidir = true){
    pair<int,int> x  = {dest,wt};
    graph[src].push_back(x);
    if(bidir){
        x.first = src;
        graph[dest].push_back(x);
    }
}

void display(vector<list<pair<int,int>>> & graph){
    for(int i = 0;i<graph.size();i++){
        cout<<i<<"-> ";
        for(auto ele : graph[i]){
            cout<<"["<<ele.first<<","<<ele.second<<"]"<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int v;
    cout<<"enter number of vertex: ";
    cin>>v;
    int e;
    cout<<"enter number of e: ";
    cin>>e;
    vector<list<pair<int,int>> > graph(v);
    while(e--){
        int s,d,w;
        cout<<"enter src , destination and weight : ";
        cin>>s>>d>>w;
        add_edge(graph,s,d,w);
    }
    display(graph);
}