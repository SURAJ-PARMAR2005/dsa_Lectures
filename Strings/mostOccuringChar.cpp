#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter a string: ";
    getline(cin,str);
vector <int> arr(26,0);
int n = str.length();
for(int i = 0;i<n;i++){
char ch = str[i];
int ascii = (int)ch;
arr[ascii-97]++;
}

int max = 0;
for(int i =0;i<26;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
for(int i =0;i<26;i++){
    if(arr[i]==max){
        int ascii = arr[i]+97;
        cout<<(char)ascii<<" "<<max<<endl;
    }
}
   
}