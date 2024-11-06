#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>&v){
    vector<int>temp;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0)temp.push_back(v[i]);
    }
    
    for(int i=0;i<temp.size();i++){
        v[i]=temp[i];
    }
    
    for(int i=temp.size();i<v.size();i++){
        v[i]=0;
    }
    
}


int main() {
    vector<int>v={1,0,3,0,4,4,0,0,0,3,5,8,0,5};
    fun(v);
    for(auto it:v)cout<<it<<" ";

    return 0;
}