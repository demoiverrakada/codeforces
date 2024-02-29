#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int j = 0; j < t; j++){
        //cout << t << endl;
        int n;
        cin >> n;
        vector<int> arr1;
        vector<int> arr2;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr1.push_back(x);
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr2.push_back(x);
        }
        //bool alpha = true;
        for(int i = n-1; i >= 0; i--){
            if(arr1[i] > arr2[i]){
                cout << "NO" << endl;
                //alpha = false;
                break;
            } else if(arr1[i] == arr2[i]){
                if(i == 0){
                    cout << "YES" << endl;
                }else {
                    continue;    
                }
            } else {
                if(i == 0){
                    cout << "YES" << endl;
                    //cout << j << endl;
                    break;
                } else{
                    if(arr1[i] <= arr1[i+1]){
                        arr1[i]++;
                        i--;
                    } else {
                        cout << "NO" << endl;
                        //alpha = false;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}