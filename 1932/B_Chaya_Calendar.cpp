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
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int y = 0;
        for(int j = 0; j < n; j++){
            int p_y = arr[j];
            int x = y/p_y;
            if(x*p_y > p_y){
                p_y = x*p_y;
            }
            while(y>=p_y){
                p_y += arr[j];
            }
            y = p_y;
        }
        cout << y << endl;
    }

    return 0;
}