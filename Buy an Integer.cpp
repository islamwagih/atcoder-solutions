#include <bits/stdc++.h>
#define EPS 1e-9
#define endl '\n'
#define getSize(_s) (int)_s.size()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int d(int n){
    int cnt = 0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}

ll getValue(ll a, ll b, ll n){
    return a*n + b*d(n);
}

ll binarySearch(ll a, ll b, ll x){
    ll low = 0, high = 1e9, sol = -1;
    while(low <= high){
        ll mid = ((high-low)/2)+low;
        ll res = getValue(a, b, mid);
        if(res == x){
            return mid;
        }else if(res < x){
            sol = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return sol;
}

int main(){
    fastInputOutput();
    ll a, b, x;
    cin>>a>>b>>x;
    ll ans = binarySearch(a, b, x);
    if(ans == -1){
        cout<<0<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}
