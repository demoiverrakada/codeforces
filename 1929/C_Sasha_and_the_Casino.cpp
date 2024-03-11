#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long k, x, a;
        cin >> k >> x >>a ;
        long long initial_coins = a;
        long long current_loss = 1;
        bool alpha = false;
        for(long long i = 1; i < x; i++){
            long long next_loss = current_loss/(k-1) + 1;
            current_loss += next_loss;
            if(current_loss > a){
                cout << "NO" << endl;
                alpha = true;
                break;
            }
        }
        a -= current_loss;
        if(!alpha){
            if(a < 0){
                cout << "NO" << endl;
            } else {
                if(a*k > initial_coins){
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}