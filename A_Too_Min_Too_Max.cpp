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
        vector<int> arr;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        int ans = 2*arr[n-1] + 2*arr[n-2] - 2*arr[0] - 2*arr[1];
        cout << ans << endl;
    }

    return 0;
}