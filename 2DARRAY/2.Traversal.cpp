#include<iostream>
using namespace std;
int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    //now to print the whole array
    for(int i=0;i<3;i++){ //i is for rows 
        for(int j = 0;j<3;j++){//j is for columns
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}