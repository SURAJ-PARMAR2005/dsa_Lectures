#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int n;
 cout<<"enter the size of v: ";
 cin>>n;
 vector <int> v(n);
 for(int i = 0;i<n;i++){
    cin>>v[i];
 }

 sort(v.begin(),v.end());


int insertIdx = 1;
int k = 2;
for(int i = 1; i<n;i++){
    if(v[i-1] != v[i]){
        //mtlb unique h wo element
        v[insertIdx] = v[i];
        i++;
        insertIdx++;
        k++;
    }
    else{
        i++;
    }
}

cout<<k<<endl;
//now print the vector
for(int i = 0; i<k;i++){
cout<<v[i]<<" ";
}


}