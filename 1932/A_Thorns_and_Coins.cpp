#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        string s;
        cin >> s;
        
        int max_coins = 0;

        
        int coins = 0;
        int a = 0;
        for(int k = 0; k < n; k++){
            if (a < 2){
                if(s[k] == '@'){
                    coins++;
                    a = 0;
                } else {
                    if(s[k] == '.'){
                        a = 0;
                        continue;
                    } else {
                        a++;
                    }
                }
            }
            else{
                break;
            }
        }
        if(coins > max_coins){
            max_coins = coins;
        }
        cout << max_coins << endl;
    }

    return 0;
}