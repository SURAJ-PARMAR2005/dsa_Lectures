class Solution {
public:
    vector<pair<int,int> > grp;
    void seperateIslands(vector<vector<int>>& grid,int & i, int & j){
        int row = grid.size();
        int col = grid[0].size();
        queue<pair<int,int> > qu;
        qu.push({i,j});
        grid[i][j] = -1;

        while(not qu.empty()){
            auto curr = qu.front();
            qu.pop();
            int f = curr.first;
            int s = curr.second;
            grp.push_back({f,s});
            if(f>0 && grid[f-1][s] == 1){
                grid[f-1][s] = -1;
                qu.push({f-1,s});
            
            }
            if(f<row-1 && grid[f+1][s] == 1){
                grid[f+1][s] = -1;
                qu.push({f+1,s});
            
            }
            if(s>0 && grid[f][s-1] == 1){
                grid[f][s-1] = -1;
                qu.push({f,s-1});
            
            }
            if(s<col-1 && grid[f][s+1] == 1){
                grid[f][s+1] = -1;
                qu.push({f,s+1});
            }
        }
        return;
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int oneRow = 0;
        int oneCol = 0;
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(grid[i][j] == 1){
                    oneRow = i;
                    oneCol = j;
                    break;
                }
            }
        }

        seperateIslands(grid,oneRow,oneCol);

        queue<pair<int,int> > qu;
        for(int i = 0;i<grp.size();i++){
            auto curr = grp[i];
            int f = curr.first;
            int s = curr.second;
            if(f>0 && grid[f-1][s] == 0 || f<row-1 && grid[f+1][s] == 0 || s>0 && grid[f][s-1] == 0 || s<col-1 && grid[f][s+1] == 0){
                qu.push({f,s});
            }
        }

        //now we got the boundary cells , do bfs with step increment on each bfs ;
int dirs[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int steps = 0;

while (!qu.empty()) {
    int sz = qu.size();  // snapshot current level size
    
    while (sz--) {       // process exactly this level
        auto [i, j] = qu.front();
        qu.pop();
        
        for (auto& d : dirs) {
            int ni = i + d[0];
            int nj = j + d[1];
            
            if (ni < 0 || ni >= row || nj < 0 || nj >= col) continue;
            if (grid[ni][nj] == 1) return steps;  // hit island 2
            if (grid[ni][nj] == 0) {
                grid[ni][nj] = -1;
                qu.push({ni, nj});
            }
        }
    }
    steps++;  // done with this level, increment once
}
    return steps;
    }
};