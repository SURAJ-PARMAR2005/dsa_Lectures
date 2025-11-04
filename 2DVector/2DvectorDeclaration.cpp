#include<iostream>
#include<vector>
using namespace std;
int main(){
    //declation
    // vector<int> v(5,2);
    // cout<<v[0];//2 sare 5 element

    vector < vector <int> > v(3,vector <int> (4,3));
    // cout<<v[0][0];

    for(int i = 0;i<3;i++){
        for(int j = 0; j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    //to print no of rows 
    cout<<v.size()<<endl;
    cout<<v[1].size();
    
}