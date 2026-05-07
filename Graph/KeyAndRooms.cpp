#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;


class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n  = rooms.size();
        int m =- rooms[0].size();
        unordered_set<int> visited;
        queue<int> qu;
        // start with 0th room
        qu.push(0);
        visited.insert(0);
        while(!qu.empty()){
            int curr = qu.front();
            qu.pop();
            for(int neighbour : rooms[curr]){
                if(visited.count(neighbour) == 0){
                    //neighbour visit nhi hua h abhi'
                    qu.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
        return visited.size()== rooms.size();
    }
};

int main(){
}