#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
    string s;
    getline(cin , s);
    string che = "hello";
    for (char c : s){
        if(che.empty()){
            break;
        } else {
            if(che[0] == c){
                if(che.size() > 1){
                    che = che.substr(1);
                }else if (che.size() == 1){
                    che = "";
                }
            }
        }
    }
    if(che.empty()){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}