#include<iostream>
#include<vector>
using namespace std;
int main() {

    vector <int> v(5);//initializing with size
    vector <int> Vec(5,7);// intialize size = 5 , each element will be 7
    cout<<Vec[3]<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i = 0 ; i<v.size(); i++) {
        cout<<v[i]<<" ";

    }
}