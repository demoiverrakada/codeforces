#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int i = 0, j = n-1, left = 0, right = 0;
    while(i < n && arr[i] == arr[0]){
        i++, left++;
    }
    while(j >=0 && arr[j] == arr[n-1]){
        j--, right++;
    }
    if(arr[0] == arr[n-1]){
        cout << max(0, n-left-right) << endl;
    } else {
        cout << min(n-left, n-right) << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--){
       solve();

    }

    return 0;
}