#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for(int i = 0; i < n; i++){
        vector<int> subarr;
        for(int j = 0; j < 3; j++){
            int x;
            cin >> x;
            subarr.push_back(x);
        }
        arr.push_back(subarr);
    }
    bool alpha = false;
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j][i];
        }
        if(sum != 0){
            alpha = true;
            break;
        }
    }
    if(alpha){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}