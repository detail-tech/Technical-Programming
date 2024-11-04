#include <bits/stdc++.h>
using namespace std;
void fun(vector<int>&v){
    set<int>st;
    for(int i=0;i<v.size();i++){
        st.insert(v[i]);
    }
    for(auto it:st){
        cout<<it<<" ";
    }
}

int main() {
    vector<int>v={1,2,2,2,3,3,4};
    fun(v);

    return 0;
}