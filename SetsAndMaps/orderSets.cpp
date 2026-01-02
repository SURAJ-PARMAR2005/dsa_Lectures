#include<iostream>
#include<set>
#include<map>
using namespace std;
int main() {
    //declare 
    // set<int> s;
    // s.insert(5);
    // s.insert(4);
    // s.insert(3);
    // s.insert(2);

    // //mehtods takes O(logn) time complexity

    // for(int ele : s){
    //     cout<<ele<<" ";
    // }


      map<string,int> mp;
    mp["suraj"]  = 30;
    mp["sanchit"]  = 10;
    mp["vishwesh"]  = 20;

//sorting happens on key

    //mehtods takes O(logn) time complexity

    for(auto ele : mp){
        cout<<ele.first<<" ";
        cout<<ele.second<<" ";
    }


}