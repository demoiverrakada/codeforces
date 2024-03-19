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
        int x, y, z;
        cin >> x >> y >> z;
        int a , b, c;
        if(y > z){
            if(x > y-z){
                a = 1;
            } else {
                a = 0;
            }
        } else {
            if(x > z-y){
                a = 1;
            } else {
                a = 0;
            }
        }
        if(x > z){
            if(y > x-z){
                b = 1;
            } else {
                b = 0;
            }
        } else {
            if(y > z-x){
                b = 1;
            } else {
                b = 0;
            }
        }
        if(y > x){
            if(z > y-x){
                c = 1;
            } else {
                c = 0;
            }
        } else {
            if(z > x-y){
                c = 1;
            } else {
                c = 0;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}