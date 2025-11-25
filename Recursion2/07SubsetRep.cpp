#include <iostream>
#include <string>
#include <vector>
using namespace std;
void storeSub(string ans, string org, vector<string> &v,bool flag)
{
    // base case
    if (org == "")
    {
        // cout<<ans<<endl;
        v.push_back(ans);
        return;
    }

    // 2 call lagani h

    char ch = org[0];
    if(org.length() == 1){
        //comapre hi nhi krr skta
    if(flag == true) storeSub(ans+ch, org.substr(1), v,true);
    storeSub(ans, org.substr(1), v,true);
    return;
    }

    char dh = org[1];
    if(ch == dh){
       if(flag == true) storeSub(ans+ch, org.substr(1), v,true);
    storeSub(ans, org.substr(1), v,true);
    }
    else{
            if(flag == true) storeSub(ans+ch, org.substr(1), v,true);
    storeSub(ans, org.substr(1), v,true);
    }
}
int main()
{
    string str;
    cout << "enter  str: ";
    getline(cin, str);
    vector<string> v;
    storeSub("", str, v,true);

    // printing the vector v

    // by for each loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
