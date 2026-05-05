#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
        //this func will do dfs from currRow, currCol, to its neighbours containng intial color 
    void dfs(vector<vector<int>>&image , int currRow, int currCol, int intialColor,int newColor ){
        int n = image.size();
        int m = image[0].size();
        if(currRow<0 || currCol<0 || currRow>=n || currCol>=m){
            return; 
        }
        //if cell landed is not intialcolr
        if(image[currRow][currCol] != intialColor){
            return;
        }
        image[currRow][currCol] = newColor;
        dfs(image,currRow+1,currCol,intialColor,newColor);
        dfs(image,currRow,currCol-1,intialColor,newColor);
        dfs(image,currRow-1,currCol,intialColor,newColor);
        dfs(image,currRow,currCol+1,intialColor,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initalColor = image[sr][sc];
        if(color == initalColor) return image;
        dfs(image,sr,sc,initalColor,color);
        return image;
    }
};

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>> image(n,vector<int> (m));
    int sr;
    cin>>sr;
    int sc;
    cin>>sc;
    int color;
    cin>>color;
    Solution * s = new Solution();
    s->floodFill(image,sr,sc,color);
    //print your soln then
    
}