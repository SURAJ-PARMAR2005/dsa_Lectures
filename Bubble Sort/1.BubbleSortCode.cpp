#include<iostream>
using namespace std;
int main() {
    int arr[6] = {3,30,3,4,5,9};
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5-i;j++){
            if(arr[j]<arr[j+1]){
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<endl;
       for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}