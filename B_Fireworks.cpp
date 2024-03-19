#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        long long p = (c)/a;
        long long q = (c)/b;
        long long ans = 2 + p + q;
        cout << ans << endl;
    }

    return 0;
}