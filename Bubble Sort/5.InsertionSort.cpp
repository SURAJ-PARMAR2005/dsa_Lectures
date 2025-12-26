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
    for(int i = 0;i< v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //insertion sort

    for(int i =1;i<n;i++){
        int j = i;
        // while(j>=1){
        //     if(v[j]>= v[j-1]) break;
        //     else {
        //         swap(v[j],v[j-1]);
        //     }
        //         j--;
        // }
        while(j>=1 && v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }

 for(int i = 0;i< v.size();i++){
        cout<<v[i]<<" ";
    }
}




//T.c: bhar ka loop n-1 times chl rha h 
//andar wala loop will run n(n+1)

//for worst case it will be O(n^2);
//avergage case : O(n^2);

//best case : O(n);

//stable or not selection sort
// insertion sort is stable , only adjacent sort just like bubble sort
