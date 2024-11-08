#include <bits/stdc++.h>
using namespace std;

int func(vector<int>&v){
    int cnt=0,mx=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==1)
        {
            cnt++;
        }
        if(v[i]==0)
        {
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    return mx;
}

int main() {
   vector<int>v={1,0,1,1,1,0};
   cout<<"maximum consecutive ones are "<<func(v);

    return 0;
}