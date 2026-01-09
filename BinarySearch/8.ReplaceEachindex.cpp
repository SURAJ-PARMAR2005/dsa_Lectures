#include<iostream> 
using namespace std;

float max(float a, float b){
    if(a>=b) return a;
    else return b;
}
float min(float a, float b){
    if(a<=b) return a;
    else return b;
}


int main() {
    int n = 3;
    int arr[] = {5,3,10};

    // cout<<"enter n: ";
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    bool flag = true;

    float kmin = (float)(INT8_MIN);
    float kmax = (float)(INT8_MAX);
    for(int i = 0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            //kmin ke bare mai sochna h
            kmin = max(kmin,(arr[i] + arr[i+1]))/2;
        }
        else{
            kmax = min(kmax,(arr[i] + arr[i+1]))/2;
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }

    if(flag == false) cout<<-1;
    else if(kmin == kmax){
        if(kmin - (int)kmin == 0){
            cout<<"there is only one value of K: "<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin - (int)kmin > 0){
            kmin = (int)kmin +1;
        }
        cout<<"Range of k is :["<<kmin<<","<<(int)kmax<<"]";
    }

}