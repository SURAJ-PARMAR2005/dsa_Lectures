// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void permutation(vector<string> &v,string org,string ans){
//     if(org == ""){
//         v.push_back(ans);
//         return;
//     }
//     for(int i = 0;i<org.length();i++){
//         char ch = org[i];
//         string  left = org.substr(0,i);
//         string right = org.substr(i+1);
//         permutation(v,left+right,ans+ch);
//     }
// }
// int main() {
//     string str;
//     cin>>str;
//     int n = str.length();
//     vector <string> v;
//     permutation(v,str,"");

//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }