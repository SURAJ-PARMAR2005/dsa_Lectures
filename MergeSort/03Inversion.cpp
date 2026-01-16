#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
int count = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(v[i]>v[j]) count++;
        }
    }

    cout<<"inversion total: "<<count<<endl;

     
}