#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>& v, int d) {
    d = d % v.size(); // In case d is greater than array size
    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.end());
    reverse(v.begin(), v.end());
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    fun(v, 2);
    for (auto it : v) cout << it << " ";
    return 0;
}
