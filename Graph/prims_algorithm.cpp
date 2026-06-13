#include<bits/stdc++.h>

#define pp pair<int,int>
using namespace std;

    
void add_edge(vector<list<pp>> & graph,int src,int des,int weight){
    graph[src].push_back({des,weight});
    graph[des].push_back({src,weight});
}

long long int prims(vector<list<pp>> & graph,int src,int n){
    priority_queue<pp,vector<pp> , greater<pp>> pq;
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int,int> mp;
    for(int i = 1;i<=n;i++){
        mp[i] = INT8_MAX;
    }
    pq.push({0,src});
    mp[src]= 0;
    int total_count = 0; //n-1 edges ko denote krta h
    int result = 0; //sum of wt ko store krenge
    while(total_count<n && !pq.empty()){
     
        pp curr = pq.top();
        
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count++;
        result += curr.first;
        pq.pop();
        for(auto neig : graph[curr.second]){
            if(!vis.count(neig.first) &&  mp[neig.first] > neig.second){

                pq.push({neig.second,neig.first});
                par[neig.first] = curr.second;
                mp[neig.first] = neig.second;
                
            }

        }
    }
    return result;
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
    cout<<prims(graph,src,n);


}