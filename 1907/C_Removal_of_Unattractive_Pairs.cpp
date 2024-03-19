#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mx = 0;
        map<char , int > times;
        for(int i = 0; i < n; i++){
            times[s[i]]++;
            mx = max(mx, times[s[i]]);
        }
        if(mx > n/2){
            cout << 2*mx -n << endl;
        } else {
            cout << n%2 << endl;
        }
    }

    return 0;
}