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
        int n;
        cin >> n;
        int ans = 0;
        ans += n/15;
        n = n%15;
        ans += n/10;
        n = n%10;
        ans += n/6;
        n = n%6;
        ans += n/3;
        n = n%3;
        ans += n/1;
        n = n%1;
        cout << ans << endl;
    }


    return 0;
}