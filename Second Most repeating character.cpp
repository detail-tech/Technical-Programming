#include <bits/stdc++.h>
using namespace std;

char fun(string s){
    
int arr[256]={0},i;
for(i=0;i<s.length();i++)
{
    arr[s[i]]++;
}

int first=0,second=0;
for(int i=0;i<256;i++)
{
    if(arr[i]>arr[first])
    {
        second=first;
        first=i;
    }
    else if(arr[i]>arr[second] && arr[i]!=arr[first])
    {
        second = i;
    }
}
return second;
}

int main() {
   //second most repeating character
    string s="aabbccc";
    cout<<"Second most repeating character "<<fun(s);

    return 0;
}