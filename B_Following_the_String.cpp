#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        map<int, char> map1;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        string s = "";
        char c = 'a';
        int x = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                c = c + static_cast<int>(x);
                s = s+c;
                x++;
            } else{
                
            }           
        }
        
    }
    return 0;
}

