#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[] = {19,12,23,8,16};
    int n = 5;
    vector<int> v(n,0);
    int x = 0;
    for(int i = 0;i<n;i++){
        int min = INT8_MAX;
        int mindex = -1;
        for(int j = 0;j<n;j++){
            if(v[j] == 1) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindex = j;
                }
            }
        }
        arr[mindex] = x;
        v[mindex] = 1;
        x++;
    }
   
}