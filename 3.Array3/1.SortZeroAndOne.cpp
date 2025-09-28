#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector <int> v(n);
    for(int i = 0 ; i<v.size();i++){
        cout<<" ele: ";
        cin>>v[i];
    }

    int noz = 0;
    int noo = 0;

    for(int i = 0 ; i<v.size();i++){
        if(v[i] == 0){
            noz++;
        }
        else if(v[i] == 1){
            noo++;
        }
    }

    // cout<<noz<<endl;
    // cout<<noo<<endl;
    // for(int i = 0;i<noz;i++){
    //     v[i] = 0;
    // }
    // for(int i = noz;i<v.size();i++){
    //     v[i] = 1;
    // }

    for(int i = 0; i<v.size();i++){
        if(i<noz){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
    // // sort(v.begin(), v.end());
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<' ';
    
    }


}