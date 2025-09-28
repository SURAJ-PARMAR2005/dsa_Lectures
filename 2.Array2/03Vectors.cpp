#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> v;//no need to mention size 
    //inserting / never use [] for inserting
   v.push_back(3);
   cout<<v.size()<<endl;
   // v[1] = 1;
   v.push_back(4);
   cout<<v.capacity()<<endl;
   v.push_back(2);
   cout<<v.capacity()<<endl;
   v.push_back(67);
   cout<<v.capacity()<<endl;
   v.push_back(23);
   cout<<v.capacity()<<endl;


   //you can use [] for accessing tho
   // cout<<v[0]<<" ";
   // cout<<v[1]<<" ";
   // cout<<v[2]<<" ";
   // cout<<v[3]<<" ";
//    cout<<v[4]<<" ";





}