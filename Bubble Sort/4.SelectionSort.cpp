#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    //vector has been inputed
    //alogrithm for selction sort;
    //1. search for the minimum ele in the array , keep track of first element of the search
    //2. swap with the first element

    //    for(int i = 0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    // cout<<endl;
    //array printing with for each loop

    // for(int ele : v){
    //     cout<<ele<<" ";
    // }


    for(int i = 0;i<n-1;i++){
        int min = INT8_MAX;
        int mindex = -1;
        //minimum ele cal of each range
        for(int j = i;j<n;j++){
            if(v[j]<min){
                min = v[j];
                mindex = j;
            }
        }

        swap(v[i],v[mindex]);
    }

       for(int ele : v){
        cout<<ele<<" ";
    }

}
       

       //space complexity is O(1);