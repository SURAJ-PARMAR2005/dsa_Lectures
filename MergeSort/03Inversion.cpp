#include<iostream>
#include<vector>
using namespace std;
int c = 0;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){ //= to make it stable   
            res[k++] = a[i++];     
         }
         else{
            res[k++] = b[j++];
         }
    }
    if(i == a.size()){
        while(j<b.size()) res[k++] = b[j++];
    }
    if(j == b.size()) while(i<a.size()) res[k++] = a[i++];
}

int inversion(vector<int> &a,vector<int> &b){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]> b[j]){
            count += (a.size() - i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}

void mergeSort(vector<int> &v){
    int n  = v.size();
    if(n == 1) return;
    int n1 = n/2,n2 = n - n/2;
    vector<int> a(n1),b(n2);
    //copy pasting the arrays elements
    for(int i  = 0;i<n1;i++){
        a[i] = v[i];
    }

    for(int i  = 0;i<n2;i++){
        b[i] = v[i+n1];
    }
     //time to do the magic aka recursion
    mergeSort(a);
    mergeSort(b);

    //count the inversion
    c += inversion(a,b);

//merging 
    merge(a,b,v);

    //deletion of a and b
    a.clear();
    b.clear();
}
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    mergeSort(v);

// int count = 0;
//     for(int i = 0;i<n-1;i++){
//         for(int j = i+1;j<n;j++){
//             if(v[i]>v[j]) count++;
//         }
//     }

    // cout<<"inversion total: "<<count<<endl;
    
     cout<<c<<endl;
}