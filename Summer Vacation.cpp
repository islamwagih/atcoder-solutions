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

const int N = 1e3+9;
const int M = 2*N;
const int mod = 1e9+7;
const int OO = 0x3f3f3f3f;
const ll OOLL = 0x3f3f3f3f3f3f3f3f;


map<int, vector<int>> mp;
priority_queue<int> pq;

int main(){
    FIO();
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a, b;cin>>a>>b;
        mp[a].push_back(b);
    }
    ll ans = 0;
    for(int i=1;i<=m;i++){
        for(int& gold:mp[i]) pq.push(gold);
        if(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
    }
    cout<<ans<<endl;
    return 0;
}
