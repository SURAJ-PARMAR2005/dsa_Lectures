#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"number you want rev of : ";
    cin>>x;
    int rev = 0;

   while(x>0){

    int last = x % 10;
    rev = rev *10 + last;
    

   }
   cout<<rev;

}