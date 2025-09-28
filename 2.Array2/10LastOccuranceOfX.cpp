#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"give me the size of vector intially: ";
    cin>>n;
    vector <int> v(n);

    for(int i = 0; i<v.size();i++){
        cout<<"enter the elements of vector: ";
        cin>>v.at(i);
    }
    int x;
    cout<<"enter the number you wanna last occurance of: ";
    cin>>x;
    int idx = -1;

    // for(int i = 0; i<v.size(); i++){
    //     if(v.at(i) == x){
    //         idx = i;
    //     }
    // }

    // cout<<"last seen at indx: "<<idx;


    //another method to solve it is to loop the vector from behind

    for(int i = v.size()-1; i>=0; i--){
        if(v.at(i) == x){
           idx = i;
           break;
        }
    }

    cout<<"last seen at indx: "<<idx;

}