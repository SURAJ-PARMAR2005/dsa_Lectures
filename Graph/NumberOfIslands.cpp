class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m  = grid[0].size();
        int cc = 0; //stored the number of connected comonents

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == '0'){
                    continue;
                }
                if(grid[i][j] == '0'){
                    //visited land 
                    continue;
                }
                else {
                    //land h 
                    cc++;
                    grid[i][j] = '0';
                    queue<pair<int,int>> qu;
                    qu.push({i,j});
                    while(not qu.empty()){
                        auto curr = qu.front(); //get one node from wu
                        qu.pop();
                        //go to all unvisited neighbours of the current node                    
                        int currRow = curr.first;
                        int currCol = curr.second;

                        if(currRow -1 >=0 && grid[currRow-1][currCol] == '1'){
                            qu.push({currRow-1,currCol});
                            grid[currRow-1][currCol] = '0';

                        }

                          
                        if(currRow + 1 < n  && grid[currRow+1][currCol] == '1'){
                            qu.push({currRow+1,currCol});
                            grid[currRow+1][currCol] = '0';

                        }

                          
                        if(currCol-1 >=0 && grid[currRow][currCol-1] == '1'){
                            qu.push({currRow,currCol-1});
                            grid[currRow][currCol-1] = '0';

                        }

                          
                        if(currCol+1 < m && grid[currRow][currCol+1] == '1'){
                            qu.push({currRow,currCol+1});
                            grid[currRow][currCol+1] = '0';

                        }
                    } 

                }
            }
        }
    return cc;
    }
};