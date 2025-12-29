#include<iostream>
#include<unordered_set>
using namespace std;
int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(6);

    //for each loop

    for(int i : s){
        cout<<i<<" ";
    }
    //cout<< all the elements in the set


    //cout the size of set
    // cout<<s.size()<<endl;

    //to find any target element that exist or not

    int target = 4;
    if(s.find(target) != s.end()){
        //target exist
        cout<<"exist"<<endl;
    }
    else {
        cout<<"does not exists"<<endl;
    }

}