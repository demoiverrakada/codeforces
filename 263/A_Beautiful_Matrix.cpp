#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    int k;
    for(int i = 0; i < 25; i++){
        int x;
        cin >> x;
        if(x == 1){
            k = i;
            break;
        }
    }
    int m = k/5 - 2;
    int n = k%5 - 2;
    if(m < 0){
        m = m*(-1);
    }
    if(n < 0){
        n =n*(-1);
    }
    cout << m+n << endl; 
    return 0;
}