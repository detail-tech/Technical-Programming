#include <bits/stdc++.h>
using namespace std;

int main() {
    //remove duplicate character from string
    string s="heeello",s1="";
    int i,j;
    for(i=0;i<s.length();i++){
        for(j=0;j<s.length();j++){
            if(s[i]==s[j])break;
        }
        if(i==j)s1+=s[i];
    }
 cout<<s1;
    return 0;
}