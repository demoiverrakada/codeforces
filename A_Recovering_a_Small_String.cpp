#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        if(n <= 28){
            char c = 'a'+n-3;
            cout << "aa" << c << endl;
        } else if(n <= 53){
            char c = 'a'+n-28;
            cout << "a" << c << "z" << endl;
        } else{
            char c = 'a'+n-53;
            cout << c << "zz" << endl;;
        }
    }

    return 0;
}