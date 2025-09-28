#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector <int> & v){
     for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
}
void reversePart(int i, int j, vector <int> & v){
    for(i,j;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}



int main() {

    int n;
    cout<<"n: ";
    cin>>n;
    int k;
    cout<<"k: ";
    cin>>k;
    vector<int> v(n);
    for(int i = 0; i<v.size();i++){
        cout<<"ele: ";
        cin>>v[i];
    }
    // first half reversed;

    if(k>n){
        k = k%n;
    }
    int i = 0;
    int j = v.size() - (k+1);
    reversePart(i,j,v);

    i = j+1;
    j = v.size()- 1;
    reversePart(i,j,v);

    reverse(v.begin(), v.end());

    display(v);




}