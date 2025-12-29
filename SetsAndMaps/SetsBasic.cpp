#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    
    unordered_map<string,int> mp;
    //pair hi insert hoga
    pair<string,int> p1;
    p1.first = "suraj";
    p1.second = 20;
    mp.insert(p1);
//      pair<string,int> p2;
//     p2.first = "vishwesh";
//     p2.second = 21;
//     mp.insert(p2);
//  pair<string,int> p3;
//     p3.first = "sanchit";
//     p3.second = 22;
//     mp.insert(p3);
//     // for(pair<string,int> p : mp){
//     //     cout<<p.first<<" ";
//     //     cout<<p.second<<" ";
//     // }

//method 2 to insert 

    mp["vishwesh"] = 21;
    mp["sanchit"] = 22;

    //to delete ele


    mp.erase("sanchit");

    for(auto p : mp){
         cout<<p.first<<" ";
        cout<<p.second<<" ";
    }

    cout<<mp.size();
}