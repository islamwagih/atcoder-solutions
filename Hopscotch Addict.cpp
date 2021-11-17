#include <bits/stdc++.h>
#define EPS 1e-9
#define endl '\n'
#define MOD(_a, _n) (((a%n)+n)%n)
#define getSize(_s) (int)_s.size()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

const int N = 1e5+5;
const int inf = 2e9+1;

vector<int> adj[N];
bool vis[3][N];
int n, m, s, t;
int bfs(){
    queue<int> Q;
    Q.push(s);
    vis[0][s] = 1;
    int ret = 0;
    while(!Q.empty()){
        int sz = Q.size();
        while(sz--){
            int curr = Q.front();Q.pop();
            if(curr == t && ret%3 == 0) return ret;
            for(int ch:adj[curr]){
                if(!vis[(ret+1)%3][ch]){
                    Q.push(ch);
                    vis[(ret+1)%3][ch] = 1;
                }
            }
        }
        ret++;
    }
    return -1;
}
int main(){
    fastInputOutput();
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u, v;cin>>u>>v;
        adj[u].push_back(v);
    }
    cin>>s>>t;
    int ans = bfs();
    if(~ans) ans/=3;
    cout<<ans<<endl;
    return 0;
}
