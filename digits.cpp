#include <bits/stdc++.h>
using namespace std;
int fun(int a)
{
    int even=0,odd=0;
    while(a)
    {
        int rem=a%10;
        if(rem%2==0)even+=rem;
        else odd+=rem;
        a=a/10;
    }
    return abs(even-odd);
}
int main() {
    int n;
    cin>>n;
    cout<<fun(n);

    return 0;
}