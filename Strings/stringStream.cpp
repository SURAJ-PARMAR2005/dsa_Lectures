#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main() {
string str = "raghav is   a maths teacher";
stringstream ss(str);
string temp;//to store the substring 

while(ss>>temp){
    cout<<temp<<endl;
}

}