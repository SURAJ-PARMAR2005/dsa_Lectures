#include<iostream>
#include<string>
#include<algorithm>
using namespace  std;
int main() {
    string str = "123456789101112";
    // int x = stoi(str);
    // cout<<x;//op:123456 as integer

    //stoll();
    long long x = stoll(str);
    cout<<x;
}
