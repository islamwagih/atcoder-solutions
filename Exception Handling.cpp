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
    int n;cin>>n;
    vector<int> arr(n), pre(n), suf(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    pre[0] = arr[0];
    for(int i=1;i<n;i++) pre[i] = max(arr[i], pre[i-1]);
    suf[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--) suf[i] = max(arr[i], suf[i+1]);
    cout<<suf[1]<<endl;
    for(int i=1;i<n-1;i++){
        cout<<max(pre[i-1], suf[i+1])<<endl;
    }
    cout<<pre[n-2]<<endl;
    return 0;
}
