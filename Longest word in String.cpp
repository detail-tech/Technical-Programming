#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="hello this is technical programming Question";
    string s1="";
    string largest="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' ')
        {
            if(largest.length() < s1.length())
            {
                largest=s1;
            }
            s1="";
        }
        else
        {
           s1+=s[i]; 
        }
    }
    if(s1.length()>largest.length())cout<<s1;
    else cout<<largest;

    return 0;
}