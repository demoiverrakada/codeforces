#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long even_nums = n/2;
    long long odd_nums = n - even_nums;
    if(k <= odd_nums){
        cout << 2*k - 1  << endl;
    } else {
        k = k - odd_nums;
        cout << 2*k << endl;
    }

    return 0;
}