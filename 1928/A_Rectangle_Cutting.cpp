#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int c = a;
        int d = b;
        if(a%2 == 1 && b%2 == 1){
            cout << "NO" << endl;
        } else {
            if(a%2 == 0 && b%2 == 0){
                cout << "YES" << endl;
            } else if(a%2 == 1 && b%2 == 0){
                if(2*a == b){
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                }
            } else {
                if(a == 2*b){
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                }
            }
        }
    }

    return 0;
}