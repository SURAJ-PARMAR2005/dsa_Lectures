#include<iostream>
#include<vector>
using namespace std;

int ans;

bool canWeGo(int n, int i, int j, vector<vector<int> > & grid){
    return i>=0 && i<n && j<n && grid[i][j] == 0;
}
void f(vector<vector<int>> & grid,int n, int i,int j){
    if(i == n-1 && j == n-1){
        ans ++;
        return;
    }

    grid[i][j] = 2; //means visited
    // left;
    if(canWeGo(n,i,j-1,grid)){
        f(grid,n,i,j-1);
    }

    //up
    if(canWeGo(n,i-1,j,grid)){
        f(grid,n,i-1,j);
    }

      // right
    if(canWeGo(n,i,j+1,grid)){
        f(grid,n,i,j+1);
    }

    //down
    if(canWeGo(n,i+1,j,grid)){
        f(grid,n,i+1,j);
    }

    grid[i][j] = 0;

}

int ratInMaze(vector<vector<int>> & grid, int n) {
    ans  = 0;
    f(grid,n,0,0);
    return ans;
}

int main() {
    // Big 8x8 binary grid test case: 0 = open cell, 1 = blocked cell
    vector<vector<int>> grid = {
        {0, 0, 1, 0, 0, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0, 0, 1, 0},
        {1, 1, 1, 1, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 0}
    };

    int n = grid.size();
    cout << "Total paths: " << ratInMaze(grid, n) << endl;
    return 0;
}
