#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr1;
        vector<int> arr2;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr1.push_back(x);
        }
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            arr2.push_back(x);
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        for(int i = 0; i < n; i++){
            int l = k - arr1[i];
            int index;
            auto it = upper_bound(arr2.begin(), arr2.end(), l);
            if(it == arr2.end()){
                index = m;
            } else {
                index = static_cast<int>(distance(arr2.begin(), it));
            }
            ans += index;
        }
        cout << ans << endl;
    }

    return 0;
}