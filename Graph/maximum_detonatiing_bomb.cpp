class Solution {
public:
    unordered_set<int> visited;

    void dfs(vector<list<int>> &graph,int src){
        if(graph[src].size() == 0) return;
        for(auto neighbour : graph[src]){
            visited.insert(src);
            if(!visited.count(neighbour)){
                visited.insert(neighbour);
                dfs(graph,neighbour);
            }
        }
    }

    int maximumDetonation(vector<vector<int>>& v) {
       int n = v.size();
       vector<list<int> > graph(n);
       for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i == j) continue;
                else{
                    int x1 = v[i][0];
                    int x2 = v[j][0];
                    int y1 = v[i][1];
                    int y2 = v[j][1];
                    long long dx = pow((x2-x1),2);
                    long long dy = pow((y2-y1),2);
                   float d = sqrt(dx+ dy);
                    if(v[i][2] >= d){
                        graph[i].push_back(j);
                    }
                }
            }
       } 

    int maxDetonation  = INT_MIN;
    for(int i = 0;i<n;i++){
        visited.clear();
        dfs(graph,i);
        int size = visited.size();
       maxDetonation = max(maxDetonation,size);
    }
    if(maxDetonation  == 0) return 1;
    return maxDetonation;
    }
};