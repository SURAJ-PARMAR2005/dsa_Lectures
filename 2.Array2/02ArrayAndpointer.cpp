#include<iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6};
    int * ptr = arr;//giving address
    // cout<<ptr<<endl;
    // cout<<ptr[0];
    //you can print whole array with pointers
    
    // for(int i = 0; i<6;i++){
    //     // cout<<ptr[i]<<" ";
    // }

    *ptr = 8;//ptr[0] = 8
    cout<<ptr[0]<<endl;
    ptr++;// ptr is pointing to 2nd element
    *ptr = 9;
    cout<<ptr[0]<<endl;

    ptr--;

    //  for(int i = 0; i<6;i++){
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
}