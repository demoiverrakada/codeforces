#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(b <= a*m){
        int k = n/m;
        int r = n%m;
        int ans1 = k*b + r*a;
        int k2;
        if(n%m == 0){
            k2 = n/m;
        }else{
            k2 = n/m + 1;
        }
        int ans2 = k2*b;
        if(ans2 > ans1){
            cout << ans1 << endl;
        } else {
            cout << ans2 << endl;
        }
    } else {
        cout << n*a << endl;
    }

    return 0;
}