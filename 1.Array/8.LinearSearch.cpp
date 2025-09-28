#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int x;
    cout<<"Enter a number you wanna find : ";
    cin>>x;
    int arr[n];
    // for taking input from the user 
    for(int i = 0; i<n;i++){
        cout<<"enter "<<i<<"th ele: ";
        cin>>arr[i];
    }

    //check mark
    bool flag = false;
    for(int i = 0;i<n;i++){
        if(arr[i] == x){
            flag = true;
            
        }
  
    }
      if(flag == true) cout<<"element found";
    else cout<<"404 element is not found";

    

}