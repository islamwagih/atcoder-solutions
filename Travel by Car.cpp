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

const int N = 300+5;
const int inf = 1e9+5;
const int M = 2*N;

int n, m, l;
ll dist[N][N], ans[N][N];

void init(){
    for(int i=0;i<N;i++){
        for(int k=0;k<N;k++){
            dist[i][k] = ans[i][k] = inf;
        }
    }
    for(int i=0;i<N;i++){
        dist[i][i] = ans[i][i] = 0;
    }
}
int main(){
    fastInputOutput();
    init();
    cin>>n>>m>>l;
    for(int i=0;i<m;i++){
        int a, b, c;
        cin>>a>>b>>c;
        dist[a][b] = dist[b][a] = c;
    }
    ///get shortest paths
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }
    ///get minimum fuel
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(i != k && dist[i][k] <= l){
                ans[i][k] = 1;
            }
        }
    }

    ///get fuel shorted paths cost
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                ans[i][j] = min(ans[i][j], ans[i][k]+ans[k][j]);
            }
        }
    }
    int q;cin>>q;
    while(q--){
        int a, b;cin>>a>>b;
        cout<<(ans[a][b] == inf ? -1:ans[a][b]-1)<<endl;
    }
    return 0;
}
