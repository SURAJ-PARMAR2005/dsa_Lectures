#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"n: ";
    cin>>n;
    int m ;
    cout<<" m: ";
    cin>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    vector<int> v3(m+n);
    for(int i = 0;i<v1.size();i++ ) {
        cin>>v1[i];
    }
    cout<<endl;
     for(int i = 0;i<v2.size();i++ ) {
        cin>>v2[i];
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while(i<n && j<m){

            if(v1[i] == v2[j]){
                v3[k] = v1[i];
                v3[k] = v2[j];
                k += 2;
                i++;
                j++;
            }
      
            if(v1[i] < v2[j]){
                v3[k] = v1[i];
                i++;
                k++;
            }
            else  {
                v3[k] = v2[j];
                j++;
                k++;
            }
            // else if(v1[i] == v2[j]){
            //     v3[k] = v2[j];
            //     v3[k] = v2[i];
            //     i++;
            //     j++;
            //     k++;
            // }
        
            //for remaining
            if(i>=n){
                //i ke sab element utha chuke he
                while(j<m){
                    v3[k] = v2[j];
                    j++;
                    k++; 
                }
            }
            if(j>=m){
                //j ke sab element are fetched 
                while(i<n){
                    v3[k] = v1[i];
                    i++;
                    k++;
                }
            }
        }
    

    for(int k = 0; k<v3.size();k++){
        cout<<v3[k]<<' ';
    }

}