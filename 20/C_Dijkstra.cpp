#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <queue>
#include <climits>
#include <cstdio>
#include <bitset>
using namespace std;

typedef pair<int, int> pairs;

const int MAXN = 1e5 +3;
const int INF = INT_MAX;

vector<vector<pairs>> adjList;
int n, dist[MAXN], par[MAXN];
bitset<MAXN> isDone;

bool dijkstra(int s, int t){
    priority_queue<pairs, vector<pairs>, greater<pairs>> pq;
    fill(dist, dist+n+1, INF);

    pq.push(pairs(0, s));
    dist[s] = 0;
    par[s] = -1;

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        if(u == t){
            return true;
        }
        isDone[u] = true;

        for(auto &pr : adjList[u]){
            int v = pr.first, w = pr.second;

            if(!isDone[v] && dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push(pairs(dist[v], v));
                par[v] = u;
            }
        }
    }
    return false;
}

int main() {
    int m;
    cin >> n >> m;
    
    adjList.resize(n+3);

    int u, v, w;

    while(m--){
        cin >> u >> v >> w;
        adjList[u].push_back(pairs(v, w));
        adjList[v].push_back(pairs(u, w));
    }

    if(dijkstra(1, n)){
        vector<int> path;

        for(v = n; v != -1; v = par[v]){
            path.push_back(v);
        }

        for(int i = path.size() -1; i >= 0; --i){
            cout << path[i] << " ";
        }
        cout << endl;
    }else {
        cout << -1 << endl;
    }
    

    return 0;
}