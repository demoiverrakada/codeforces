#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        string ans = "";
        int lc = 0;
        int uc = 0;
        for(int i = s.length() -1 ; i >= 0; i--){
            char c = s[i];
            if(islower(c)){
                if(c == 'b'){
                    lc++;
                } else if(lc > 0){
                    lc--;
                } else{
                    ans += c;
                }
            }
            if(isupper(c)){
                if(c == 'B'){
                    uc++;
                } else if(uc > 0){
                    uc--;
                } else{
                    ans += c;
                }
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}