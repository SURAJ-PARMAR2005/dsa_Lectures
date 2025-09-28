#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> & a){
       for(int i = 0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {

    int n;
    cout<<"enter size of vector: ";
    cin>>n;
    vector <int> v(n);
  for(int i = 0; i<v.size();i++){
    cout<<"enter the ele baby: ";
    cin>>v.at(i);
  }

    display(v);

  
   
    // reverse the array using while loop 
    // int  i = 0;
    // int  j = v.size() - 1;
    // while(i<=j){
    //     //swap the element at ith and jth index of v
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }


    //now by for loop 
    for(int i = 0, j = v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    display(v);
}