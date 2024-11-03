#include <bits/stdc++.h>
using namespace std;

int main() {
    int lar=0,secLarg=0;
    vector<int>v={1,2,4,3,5};
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>lar)
        {
            secLarg=lar;
            lar=v[i];
        }
    }
    cout<<"second largest element is "<<secLarg;

    return 0;
}