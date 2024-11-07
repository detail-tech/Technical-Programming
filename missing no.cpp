#include <bits/stdc++.h>
using namespace std;

int fun(vector<int>&v){
    int last_ele=v[v.size()-1];
    int sum=last_ele*(last_ele+1)/2;
    int k=0;
    for(int i=0;i<v.size();i++){
        k+=v[i];
    }
    return sum-k;
}
int main() {
    vector<int>v={1,2,4,5};
    cout<<"missing no is "<<fun(v);

    return 0;
}