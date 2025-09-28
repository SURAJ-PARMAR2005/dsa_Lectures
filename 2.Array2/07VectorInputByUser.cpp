#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> v;
    // for(int i = 0; i<v.size(); i++){
    //     cout<<"enter the value in the vector: ";
    //     cin>>v[i];

    // }

    //if size is not provided at the initialization the what should we do 


    for(int i = 0;  i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}