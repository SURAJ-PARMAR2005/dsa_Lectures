#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector <int> & v){
          for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
}

void reversePart(vector <int> &v,int i,int j){

    for( i,j;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    
}
int main() {
    int n;
    cout<<" n: ";
    cin>>n;
    vector <int> v(n);

    for(int i = 0; i<v.size(); i++){
        cout<<"ele: ";
        cin>>v[i];
    }
    
    // reverse(v.begin(),v.end());
reversePart(v,0,4);
    display(v);
 

}

