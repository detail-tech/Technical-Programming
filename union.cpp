#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>&v1,vector<int>&v2){
    set<int>st;
    for(int i=0;i<v1.size();i++)st.insert(v1[i]);
    for(int i=0;i<v2.size();i++)st.insert(v2[i]);
    
    for(auto it:st)cout<<it<<" ";
}


int main() {
    vector<int>v1={1,2,3,4};
    vector<int>v2={3,5,6,4};
    
    fun(v1,v2);
    

    return 0;
}