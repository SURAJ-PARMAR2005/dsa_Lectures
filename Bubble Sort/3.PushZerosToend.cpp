#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    vector <int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }

     for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(v[j]==0 && v[j+1] !=0){
                swap(v[j],v[j+1]);
            }
        }
    }

     for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
    }

}