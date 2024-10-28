#include <bits/stdc++.h>
using namespace std;

int main() {
    //no swapping without using third variable
    int a=11,b=21;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"No after swapping is "<<a<<" "<<b;


    return 0;
}