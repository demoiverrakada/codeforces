#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    int ans = 1;
    int temp_sum = sum;
    for(int i = 0; i < n-k; i++){
        temp_sum -= arr[i];
        temp_sum += arr[k+i];
        if(temp_sum < sum){
            sum = temp_sum;
            ans = i+2;
        }
    }
    cout << ans << endl;

    return 0;
}