#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b,c;
        cin >>a >> b >> c;
        if( 3 - b%3 <= c || b%3 == 0){
            int ans = 0;
            ans += a;
            ans += (b+c)/3;
            if ((b+c)%3 != 0) {
                ans++; // Incrementing ans if there's a remainder
            }
            cout << ans << endl;
        }else {
            cout << -1 << endl;
        }
    }
    return 0;
}