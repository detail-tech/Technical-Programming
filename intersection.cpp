#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>&v1,vector<int>&v2,vector<int>&ans){
    vector<int>vis(v2.size(),0);
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
        if(v1[i]==v2[j] && vis[j]==0)
        {
            ans.push_back(v1[i]);
            vis[j]=1;
            break;
        }
        
        }
    }
}

int main() {
    vector<int>ans;
    vector<int>v1={1,2,3,4};
    vector<int>v2={1,1,2,4};
    fun(v1,v2,ans);
    for(auto it:ans)cout<<it<<" ";

    return 0;
}