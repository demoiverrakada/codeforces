#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins;

    int x;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        coins.push_back(x);
    }
    sort(coins.begin(), coins.end());

    int m_coins = 0;
    int sum2 = sum;
    int sum3 = 0;
    for(int i = 0; i < n; i++){
        int coin = coins[n-i-1];
        sum2 -= coin;
        sum3 += coin;
        m_coins++;
        if(sum3 > sum2){
            break;
        }
    }
    cout << m_coins << endl;

    return 0;
}