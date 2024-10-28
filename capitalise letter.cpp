#include <bits/stdc++.h>
using namespace std;

int main() {
    //capitalize the first letter of each word
    string s="hello how are you";
    for(int i=0;i<s.length();i++){
        if(s[i-1]==' '|| i==0)s[i]=s[i]-32;
    }
    cout<<s;

    return 0;
}