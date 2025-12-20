#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {

    vector <string> str = {"abc","cae","cbe"};
    for(int i  = 0;i<3;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    sort(str.begin(),str.end());
     for(int i  = 0;i<3;i++){
        cout<<str[i]<<" ";
    }

}