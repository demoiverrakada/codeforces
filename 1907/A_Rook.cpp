#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        for(int i = 1; i <= 8; i++){
            if(i != s[1] - '0'){
                cout << s[0] << i << endl;
            }
        }
        string t = "abcdefgh";
        for(char c : t){
            if(c != s[0]){
                cout << c << s[1] << endl;
            }
        }
    }

    return 0;
}