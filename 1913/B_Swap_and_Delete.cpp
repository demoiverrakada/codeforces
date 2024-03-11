#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count0 = 0;
        int count1 = 0;
        for(int i = 0; i < s.length() ; i++){
            if(s[i] == '1'){
                count1++;
            }else{
                count0++;
            }
        }
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1' && count0 > 0){
                count0--;
            } else if(s[i] == '0' && count1 > 0){
                count1--;
            } else {
                ans = s.length() - i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}