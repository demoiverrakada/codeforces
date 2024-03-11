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
        vector<int> arr;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        for(int i =  1; i < n; i++){
            int k = arr[i] - arr[i-1];
            ans += k;
        }
        cout << ans << endl;
    }

    return 0;
}