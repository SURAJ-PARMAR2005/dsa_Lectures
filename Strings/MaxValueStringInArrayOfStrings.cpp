#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
     string str;
    int n;
    cout << "enter n: ";
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
cout<<endl;
  

int max = stoi(v[0]);
for(int i = 1;i<n;i++){
    int x = stoi(v[i]);
    string maxString = v[i];
    if(x>max) {
        max = x;
    maxString = v[i]; 
}
}



    cout<<max;
}