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
        string s;
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            s += c;
        }
        int map = 0;
        for(int i = 0; i < n-2; i++){
            if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
                map++;
            }
        }
        int pie = 0;
        for(int i = 0; i < n-2; i++){
            if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e'){
                pie++;
            }
        }
        int mapie = 0;
        for(int i = 0; i < n-4; i++){
            if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && s[i+3] == 'i' && s[i+4] == 'e'){
                mapie++;
            }
        }
        cout << map + pie - mapie << endl;
    }

    return 0;
}