#include <bits/stdc++.h>
#define EPS 1e-9
#define endl '\n'
#define MOD(_a, _n) (((a%n)+n)%n)
#define getSize(_s) (ll)_s.size()
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

inline void FIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

const int N = 2e5+9;
const int M = 2*N;
const int mod = 1e9+7;
const int OO = 0x3f3f3f3f;
const ll OOLL = 0x3f3f3f3f3f3f3f3f;

int n, w;
ll dp[N][109];
int weight[109];
int value[109];

ll solve(int currW, int i){
    if(i == n) return 0;
    ll& ans = dp[currW][i];
    if(~ans) return ans;
    ans = max((currW >= weight[i] ? value[i]+solve(currW-weight[i], i+1):-OOLL), solve(currW, i+1));
    return ans;
}

int main(){
    FIO();
    memset(dp, -1, sizeof dp);
    cin>>n>>w;
    for(int i=0;i<n;i++) cin>>weight[i]>>value[i];
    cout<<solve(w, 0)<<endl;
    return 0;
}
