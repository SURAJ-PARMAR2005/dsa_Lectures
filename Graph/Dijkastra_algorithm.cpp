#include<bits/stdc++.h>

#define pp pair<int,int>
using namespace std;

    
void add_edge(vector<list<pp>> & graph,int src,int des,int weight){
    graph[src].push_back({des,weight});
    graph[des].push_back({src,weight});
}

unordered_map<int,int> dijkastra(vector<list<pp>> & graph,int src,int n){
    priority_queue<pp,vector<pp> , greater<pp>> pq;
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int,int> mp;
    for(int i = 1;i<=n;i++){
        mp[i] = INT8_MAX;
    }
    pq.push({0,src});
    mp[src]= 0;
    while(!pq.empty()){
     
        pp curr = pq.top();
        
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        pq.pop();
        for(auto neig : graph[curr.second]){
            if(!vis.count(neig.first) &&  mp[neig.first] >mp[curr.second]+ neig.second){

                pq.push({mp[curr.second]+ neig.second,neig.first});
                via[neig.first] = curr.second;
                mp[neig.first] = mp[curr.second]+ neig.second;   
            }

        }
    }
    return mp;
}


int main() {
    int n, m;
    cin>>n>>m;
    vector<list<pp>> graph(n+1);
    while(m--){
        int s,d,w;
        cin>>s>>d>>w;
        add_edge(graph,s,d,w);
    }
    int src;
    cin>>src;
    unordered_map<int,int> sp = dijkastra(graph,src,n);
    int des;
    cin>>des;
    cout<<sp[des]<<"\n";



}