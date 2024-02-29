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
    string s1,s2;
    cin>>s1>>s2;
    int k = n;
    int count = 0;
    for (int i = 1;i<n;i++){
        if (s1[i]>s2[i-1]){
            k=i;
            break;
        }
        

    }
    for (int i =k-1;i>=1;i--){
        if (s1[i]==s2[i-1]){
            count++;
        }
        else{
            break;
        }
    }



    string s = "";
    for (int i = 0;i<k;i++){
        s+=s1[i];

    }
    for (int i = k-1;i<n;i++){
        s+=s2[i];
    }
    cout<<s<<endl;
    cout<<count+1<<endl;
    }
    
        



   

    return 0;
}