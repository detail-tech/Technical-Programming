#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>&v){
    for(int i=1;i<v.size();i++){
        if(v[i]>v[i-1]){
            
        }else{
            return false;
        }
    }
    return true;
}

int main() {
    vector<int>v={1,3,2,4};
    if(isSorted(v)){
        cout<<"Array is sorted";
    }else{
        cout<<"Array not sorted";
    }

    return 0;
}