#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0;
        int y = 0;
        int z = 0;
        for(int i = 0; i < n; i++){
            char c = s[i];
           // int x, y, z;

            if(c == '.'){
                x++;
                y++;
            } else if (c == '#'){
                z = max(z, y);
                y = 0;
            }
        }
        z = max(z, y);
        if(x == 0){
            cout << 0 << endl;
        } else if(z > 2){
            cout << 2 << endl;
        } else {
            cout << x << endl;
        }
    }

    return 0;
}