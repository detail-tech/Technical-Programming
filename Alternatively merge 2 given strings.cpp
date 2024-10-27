#include <bits/stdc++.h>
using namespace std;

string fun_merge(string s1,string s2){
    string res="";
    for(int i=0;i<s1.length()||i<s2.length();i++){
        if(i<s1.length())res+=s1[i];
        if(i<s2.length())res+=s2[i];
    }
    return res;
}


int main() {
    //merge two string
    string s1="Hello";
    string s2="World";
    cout<<fun_merge(s1,s2);

    return 0;
}