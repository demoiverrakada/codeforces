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
        //sort(arr.begin(), arr.end());
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                sum -= arr[i];
            } else{
                sum += arr[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}