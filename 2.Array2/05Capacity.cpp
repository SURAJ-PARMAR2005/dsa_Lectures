#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(4);//size = 1 ; capacity = 1
    v.push_back(5);//size = 2 ; capacity = 2
    v.push_back(3);//size = 3 ; capacity = 4
    v.push_back(4);//size = 4 ; capacity = 4
    v.push_back(5);//size = 5 ; capacity = 8
    v.push_back(3);//size = 6 ; capacity = 8
    v.push_back(4);//size = 7 ; capacity = 8
    v.push_back(5);//size = 8 ; capacity = 8
    v.push_back(3);//size = 9 ; capacity = 16
    v.push_back(4);//size = 10 ; capacity = 16
    v.push_back(5);//size = 11 ; capacity = 16
    v.push_back(3);//size = 12 ; capacity = 16
    v.push_back(4);//size = 13 ; capacity = 16
    v.push_back(4);//size = 14 ; capacity = 16
    v.push_back(5);//size = 15 ; capacity = 16
    v.push_back(3);//size = 16 ; capacity = 16
    v.push_back(4);//size = 17 ; capacity = 32
    v.push_back(5);//size = 18 ; capacity = 32
    v.push_back(3);//size = 19 ; capacity = 32
    v.push_back(4);//size = 20 ; capacity = 32
    v.push_back(5);//size = 21 ; capacity = 32
    v.push_back(3);//size = 22 ; capacity = 32
    v.push_back(4);//size =  23 ; capacity = 32
    v.push_back(5);//size = 24 ; capacity = 32
    v.push_back(3);//size = 25 ; capacity = 32
    v.push_back(4);//size = 26 ; capacity = 32

    cout<<"size is : "<<v.size()<<endl;
    cout<<" is capacity : "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    
    cout<<"size is : "<<v.size()<<endl;
    cout<<" is capacity : "<<v.capacity()<<endl;


}
