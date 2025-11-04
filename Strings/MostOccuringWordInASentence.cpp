#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str = "Suraj is a calm and deciplined person. Suraj is also hard working person.";
     

    //store all word into a vector
    stringstream ss(str);
    string temp;
    vector <string> v;
    while(ss>>temp){
        v.push_back(temp);
    }

   
   //sort the vector
 
     sort(v.begin(),v.end());
 
     //

     int maxCount = 1;
     int count = 1;

     for(int i = 1;i<v.size();i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count=1;
        }
        maxCount  = max(maxCount,count);        
     }

   
      count = 1;
     for(int i = 1;i<v.size();i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count=1;
        }
       if(count == maxCount){
        cout<<v[i]<<" "<<maxCount<<endl;
       }       
     }

}