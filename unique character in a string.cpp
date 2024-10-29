#include <bits/stdc++.h>
using namespace std;

int main() {
    //unique character in a string
    string s="Leetcode";
    int cnt;
    for(int i=0;i<s.length();i++){
        cnt=0;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j])cnt++;
        }
        if(cnt==1){
            cout<<s[i]<<endl;
        }
    }

    return 0;
}