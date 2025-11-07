//starting with a question
#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
 vector <int> v(n+1);
 for(int i =0;i<=n;i++){
    cin>>v[i];
 }

 //search the repeated number by brute force method
//  bool flag = false;
//  for(int i = 0 ; i < n-1;i++){
//     for(int j = i+1;j<n;j++){
//         if(v[i] == v[j]){
//             cout<<"dup found and it is "<<v[i]<<endl;
//             flag = true;
//             break;
//         }
//     }
//     if(flag == true) break;
//  }


//more efficient method for both space and time complexity

int expecSum = (n*(n+1))/2;
int orgSum = 0;
for(int i = 0;i<=n;i++){
    orgSum += v[i];
}

int dupNumb = orgSum - expecSum;

cout<<dupNumb<<" is the duplcate";


}