#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<char> v1;
    string s = "    The Name   is  John                   Cena";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' || s[i - 1] != ' ') {
            v1.push_back(s[i]);
        }
    }
   
    
    for (auto it : v1) {
        cout << it;
    }

    return 0;
}



