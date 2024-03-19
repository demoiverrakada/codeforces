#include <iostream>
#include <vector>
#include <map>
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
        bool alpha = false;
        for(int i = 0; i < n-2; i++){
            if(arr[i] < 0){
                alpha = true;
                break;
            } else {
                if(arr[i] == 0){
                    continue;
                } else {
                    int k = arr[i];
                    arr[i] = 0;
                    arr[i+1] -= k*2;
                    arr[i+2] -= k;
                }
            }
        }
        if(!alpha){
            if(arr[n-1] == 0 && arr[n-2] == 0){
                alpha = false;
            }else {
                alpha = true;
            }
        }

        if(alpha){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}