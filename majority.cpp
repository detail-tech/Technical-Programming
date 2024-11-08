#include <bits/stdc++.h>
using namespace std;

int fun(vector<int>&v){
    map<int,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto it:mp){
        if(it.second>v.size()/2)return it.first;
    }
    return -1;
}


int main() {
    vector<int>v={1,1,2,2,2};
    cout<<"majority element is "<<fun(v);

    return 0;
}