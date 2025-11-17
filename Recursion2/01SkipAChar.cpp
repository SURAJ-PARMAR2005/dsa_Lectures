// #include<iostream>
// using namespace std;
// int main() {
//     string  str = "Suraj Parmar";
//     string s = "";
//     for(int i = 0; i<str.length();i++){
// if(str[i] != 'a'){
//     s+=str[i];
// }

//     }

//     cout<<s;
// }


//recurisive code of this 

// #include<iostream>
// using namespace std;

// void removeChar(string ans, string original){
//     if(original.length() == 0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch == 'a') removeChar(ans,original.substr(1));
//     else removeChar(ans + ch,original.substr(1));
// }


// int main() {
// string str = "suraj parmar";
// removeChar("",str);
// }


//above is brute force from recursion and it has bad space complexity

//now optimised solution of