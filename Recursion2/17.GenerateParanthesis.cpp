#include<iostream>
#include<vector>
#include<string>
using namespace std;
void parentheses(string str,int o,int c,int n){
    if(c == n){
        cout<<str<<endl;
        return;
    }
    if(o<n) parentheses(str+'(',o+1,c,n);
    if(c<o)  parentheses(str+')',o,c+1,n);


}
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    // vector <string> v;
    string str ="";
    int o = 0;
    int c = 0;

    parentheses(str,o,c,n);

}