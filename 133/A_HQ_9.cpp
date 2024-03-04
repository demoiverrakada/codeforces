#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool alpha = true;
    for(char c : s){
        if(c == 'H' || c == 'Q' || c == '9'){
            cout << "YES" << endl;
            alpha = false;
            break;
        }
    }
    if(alpha){
        cout << "NO" << endl;
    }

    return 0;
}