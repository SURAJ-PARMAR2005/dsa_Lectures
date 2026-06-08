#include<bits/stdc++.h>
#include<list>
using namespace std;
void add_edge(vector<list<int>> & graph, int s, int d, bool bidir = true){
    //we have src and des , just we have to mark v[src].insert(des);
    graph[s].push_back(d);
    if(bidir){
        graph[d].push_back(s);
    }
}

void display(vector<list<int>> & graph){
    for(int i = 0;i<graph.size();i++){
         cout<<i<<"-> ";
        for(auto ele : graph[i]){
            cout<<ele<<' ';
        }
        cout<<endl;
    }
}

int main(){
    int v;
    cout<<"enter no. of of verteces : ";
    cin>>v;
    int e;
    cout<<"enter no. of edges : ";
    cin>>e;
    vector<list<int>> graph(v);
    while(e--){
        int s,d;
        cout<<"enter src node and destination node : ";
        cin>>s>>d;
        add_edge(graph,s,d);//for bidirectional
    }
    display(graph);
}