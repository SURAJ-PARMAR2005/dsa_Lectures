#include<iostream>
using namespace std;
void hanoi(int n, char a, char b, char c){
    if(n == 0) return;//base case;
    hanoi(n-1,a,c,b);// kyuki ab b ek destiination h and c is our new helper
    cout<<"Move disk "<<n<<" from "<<a<<" to  "<<c<<endl;
    hanoi(n-1,b,a,c);//yha a is our helper and  b is source and c is our destination

}
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    hanoi(n,'A','B','C');
}