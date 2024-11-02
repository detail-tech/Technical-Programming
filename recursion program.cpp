#include <bits/stdc++.h>
using namespace std;

//recursion
int sum(int a,int b){
    if(a>b)return 0;
    
    return a*a+sum(a+1,b);
}

int main() {
    int a,b;
    cout<<"Enter starting and ending number"<<endl;
    cin>>a>>b;
    cout<<"sum of squares of between two given no is"<<endl;
    cout<<sum(a,b);

    return 0;
}