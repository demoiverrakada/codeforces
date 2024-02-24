#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> arr;
        int sum = 0;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            sum += x;
            arr.push_back(x);
        }
        int per = sum/n;
        int carry = 0;
        bool tester = true;
        for(int j = 0; j < n; j++){
            if(arr[j] > per){
                carry += arr[j] - per;
                arr[j] = per;
            } else{
                if (per - arr[j] <= carry){
                    carry -= per - arr[j];
                    arr[j] = per;
                } else{
                    tester = false;
                    break;
                }
            }
        }
        if(tester){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;
}