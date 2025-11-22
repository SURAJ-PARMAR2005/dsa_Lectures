#include<iostream>
#include<vector>
using namespace std;
void printSubSet(int arr[],int n, int idx, vector<int> ans){
    if(idx == n){
        for(int i = 0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubSet(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    printSubSet(arr,n,idx+1,ans);
}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    printSubSet(arr,n,0,v);

}