#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
   // int x = 1234;
   // string s = to_string(x);
   // cout<<s;


   //return the total number of digits without using any loop

   int x;
   cout<<"enter a big number baby: ";
   cin>>x;
   string s = to_string(x);
   cout<<s.length();

}