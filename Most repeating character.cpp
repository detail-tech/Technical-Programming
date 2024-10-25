// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    //Most repeating character 
    map<char,int>mp;
    string s="Demmmmo";
    char first;
    int cnt=0;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        if(cnt<it.second){
            first=it.first;
            cnt=it.second;
        }
    }
    cout<<first;
    
    return 0;
}