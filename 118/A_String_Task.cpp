#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin , s);
    string ans = "";
    for(char c : s){
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'){
            continue;
        } else {
            ans += '.';
            ans += (islower(c) ? c : tolower(c));
        }
    }
    cout << ans << endl;

    return 0;
}