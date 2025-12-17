#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"n: ";
    cin>>n;

   float x = log10(n)/log10(3);
   cout<<x;
    if(x == int(x)) cout<<true;
    else cout<<false;


}