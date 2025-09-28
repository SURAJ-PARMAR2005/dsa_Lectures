#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"enter size of an array";
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<v.size(); i++){
        cin>>v.at(i);
    }
    int target;
    cout<<"enter target";
    cin>>target;
   
    for(int i = 0 ; i<v.size()-1;i++){
        for(int j = 1; j<v.size();j++){
            if(v.at(i) + v.at(j) == target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }



}