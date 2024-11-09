#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>&v){
    vector<int>pos,neg;
    for(int i=0;i<v.size();i++){
        if(v[i]>0)pos.push_back(v[i]);
        else neg.push_back(v[i]);
    }
    if(v.size()%2==0){
    for(int i=0;i<v.size()/2;i++){
        v[2*i]=pos[i];
        v[2*i+1]=neg[i];
    }
    }
    else{
        for(int i=0;i<=v.size()/2;i++){
        v[2*i]=pos[i];
        v[2*i+1]=neg[i];
    }
    }
}

int main() {
    vector<int>v={1,2,3,-1,-2,-3};
    fun(v);
    for(auto it:v)cout<<it<<" ";

    return 0;
}