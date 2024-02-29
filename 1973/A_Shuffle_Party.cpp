#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
 
int main() {
    int t;
    cin >> t;
    while(t--){
    int n;
    cin>>n;
    int k = 1;
    while(k<=n){
        k=k*2;
    }
    cout<<k/2<<endl;
    }
 
 
 
   
 
    return 0;
}