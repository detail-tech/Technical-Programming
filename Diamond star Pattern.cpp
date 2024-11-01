#include <bits/stdc++.h>
using namespace std;

int main() {
   int n=5;
   for(int row=0;row<=2*n;row++){
       int column=row>n?2*n-row:row;
       int space=n-column;
       for(int i=0;i<=space;i++){
           cout<<" ";
       }
       for(int col=0;col<=column;col++){
           cout<<" *";
       }
       cout<<endl;
   }

    return 0;
}