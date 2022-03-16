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

int main(){
    FIO();
    ll l, r;cin>>l>>r;
    if(r-l >= 2019) return cout<<0,0;
    ll ans = OO;
    for(ll i=l;i<=r;i++){
        for(ll j=i+1;j<=r;j++){
            ans = min(ans, (i*j)%2019);
        }
    }
    cout<<ans<<endl;
    return 0;
}
