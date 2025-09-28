#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"enter size of the array: ";
    cin>>n;
    vector <int> v(n);
    for(int i = 0;i<v.size();i++){
        cout<<"enter ele: ";
        cin>>v.at(i);
    }
    // not to copy the elements of this vector to another one 

    vector <int> vc;
    for(int i = v.size()-1;i>=0;i--){
        vc.push_back(v[i]);
    }

    //to print the vc
    for(int i = 0;i<vc.size();i++){
        cout<<vc[i]<<' ';
    }
    
}