#include<iostream>
#include<vector>
using namespace std;
void sortNegPos(vector<int> &v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]<0) i++;
        if(v[j]> 0) j--;
        else if(v[i]>0 && v[j]<0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }

    

}
int main() {
int n;
cout<<"n: ";
cin>>n;
vector <int> v(n);
for(int i = 0; i<v.size();i++){
    cin>>v[i];
}
sortNegPos(v);
for(int i = 0; i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;



}
