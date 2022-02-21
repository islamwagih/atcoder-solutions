#include <bits/stdc++.h>
#define EPS 1e-9
#define endl '\n'
#define MOD(_a, _n) (((a%n)+n)%n)
#define getSize(_s) (int)_s.size()
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

const int N = 1e5+9;
const int inf = 1e5+5;
const int M = 2*N;
const int mod = 1e9+7;

vector<vector<int>> subtree;
vector<vector<int>> graph;
int nodeToValue[N];
void dfs(int node, int par){
    subtree[node].push_back(nodeToValue[node]);
    for(int neigh:graph[node]){
        if(neigh == par) continue;
        dfs(neigh, node);
        for(int i:subtree[neigh]){
            subtree[node].push_back(i);
        }
    }
    sort(subtree[node].rbegin(), subtree[node].rend());
    while(subtree[node].size() > 20) subtree[node].pop_back();
}

int main(){
    fastInputOutput();
    int n, q;cin>>n>>q;
    graph = vector<vector<int>>(n);
    subtree = vector<vector<int>>(n);
    for(int i=0;i<n;i++) cin>>nodeToValue[i];
    for(int i=0;i<n-1;i++){
        int a, b;cin>>a>>b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(0, -1);
    for(int i=0;i<q;i++){
        int vi, ki;cin>>vi>>ki;
        cout<<subtree[vi-1][ki-1]<<endl;
    }
    return 0;
}
