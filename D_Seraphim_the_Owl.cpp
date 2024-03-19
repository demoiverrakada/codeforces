#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        vector<long long> a;
        vector<long long> b;
        for(long long i = 0; i < n; i++){
            long long x;
            cin >> x;
            a.push_back(x);
        }
        for(long long i = 0; i < n; i++){
            long long x;
            cin >> x;
            b.push_back(x);
        }
        long long ans = 0;
        if(n > m){
            for(long long i = 0; i < n-m; i++){
                long long l = a[n-i-1];
                long long m = b[n-i-1];
                if(l > m){
                    ans += m;
                } else {
                    ans += l;
                }
            }
        }
        ans += a[m-1];
        cout << ans << endl;
    }

    return 0;
}