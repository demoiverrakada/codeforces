#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

struct Pair {
    long first, second;

    Pair(long first, long second) : first(first), second(second) {}
    
    bool operator==(const Pair& other) const {
        return first == other.first && second == other.second;
    }
};

namespace std {
    template <>
    struct hash<Pair> {
        size_t operator()(const Pair& p) const {
            return hash<long>()(p.first) ^ hash<long>()(p.second);
        }
    };
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        long x, y;
        cin >> n >> x >> y;

        long *a = new long[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        unordered_map<Pair, int> mp;
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            long p = a[i]%x;
            long q = a[i]%y;
            long val = x - p;

            if(p == 0){
                val = 0;
            }
            ans += mp[{val, q}];
            
            mp[{p, q}]++;
        }
        cout << ans << endl;
        delete[] a;
    }
    return 0;
}