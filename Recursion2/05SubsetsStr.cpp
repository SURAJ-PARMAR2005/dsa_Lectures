#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSub(string ans,string org,int idx,vector<string> & v){

    //base case

    if(idx == org.length()){
        // cout<<ans<<endl;
        v.push_back(ans);
        return;
    }

    //2 call lagani h 

    char ch = org[idx];
    storeSub(ans,org,idx+1,v);
    storeSub(ans+ch,org,idx+1,v);



}
int main() {
   string str;
   cout<<"enter  str: ";
   getline(cin,str);
   vector<string> v;
   storeSub("",str,0,v);


   //printing the vector v

//by for each loop
for(string ele : v){
    cout<<ele<<endl;
}

}


