class Solution {
public:
    bool isSafe(int i, int j, vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        return i >= 0 && j >= 0 && i < n && j < m;
    }

    vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    // int backtrack(int i, int j, vector<vector<int>>& grid, int cost) {
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     if (i == n - 1 && j == m - 1) {
    //         return cost;
    //     }

    //     int minimum = INT_MAX;
    //     cout<<minimum <<" "<<endl;;
    //     int givenDir = grid[i][j];
    //     grid[i][j] = -1; // marker visited 
    //     for (int k = 0; k < 4; k++) {
    //         int newI = i + dir[k][0];
    //         int newJ = j + dir[k][1];
    //         cout<<newI<<" "<<newJ<<endl;
    //         if (isSafe(newI, newJ, grid)) {
    //             int newCost = cost + ((givenDir - 1 != k) ? 1 : 0);
    //             cout<<newCost<<endl;
    //             minimum = min(minimum, backtrack(newI,newJ,grid,newCost));
    //         }

    //     }
    //     grid[i][j] = givenDir;
    //     return minimum;
    // }


    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
       vector<vector<int>> mp(n,vector<int> (m,INT_MAX));

        deque<pair<int,int>> dq;
        dq.push_front({0,0});
        mp[0][0] = 0;

        while(!dq.empty()){
            auto curr = dq.front();
            dq.pop_front();
            int i = curr.first;
            int j = curr.second;
            int currDir = grid[i][j];

            for(int k = 0;k<4;k++){
                int newI = i + dir[k][0];
                int newJ = j + dir[k][1];
                int currCost = 1;
                if(isSafe(newI,newJ,grid)){
                    currCost = ((currDir == k+1)? 0: 1);
                    if(mp[newI][newJ] > mp[i][j] + currCost){
                        mp[newI][newJ] = mp[i][j] + currCost;
                        if(currCost == 1){
                            dq.push_back({newI,newJ});
                        }
                      else dq.push_front({newI,newJ});    
                    }
                }
            }
        }
    return mp[n-1][m-1];
    }
};