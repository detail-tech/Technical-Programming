#include <bits/stdc++.h>
using namespace std;

int main() {
    //first unique character in a string
    string s="Leetcode";
    int cnt,index=0;
    for(int i=0;i<s.length();i++){
        cnt=0;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j])cnt++;
        }
        if(cnt==1){
            index=i;
            cout<<s[i];
            break;
        }
    }

    return 0;
}