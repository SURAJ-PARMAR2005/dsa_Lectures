#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    //input string
    string str;
    cout<<"enter a string baby: ";
    getline(cin,str);
    
    //variables declaration
    int n = str.length();
    int i = 0;
    int j = 1;
    int count = 0;
    while(i<=n-2 && j<=n-1){
        if(str[i] != str[j]){
            count++;
            i++;
            j++;
        }
        else{i++;
        j++;}
    }

    cout<<"this much times the neighbouring character was different from each other"<<" "<<count<<endl;

}