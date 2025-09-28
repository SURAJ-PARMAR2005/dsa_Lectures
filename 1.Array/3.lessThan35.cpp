#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the numb of student: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cout<<"enter the marks of rollno "<<i<<": ";
        cin>>arr[i];
    }
    int failed = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]<35){
            cout<<i<<endl;
            failed++;
        }
    }
    cout<<"failed students are: "<<failed;
}