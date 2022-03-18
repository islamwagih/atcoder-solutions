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

int n;
int dp[N];
int arr[N];
int solve(int i){
    if(i == n-1) return 0;
    if(i >= n) return OO;
    int& ans = dp[i];
    if(~ans) return ans;
    int op1 = OO, op2 = OO;
    if(i+1 < n) op1 = abs(arr[i+1]-arr[i])+solve(i+1);
    if(i+2 < n) op2 = abs(arr[i+2]-arr[i])+solve(i+2);
    return ans = min(op1, op2);
}

int main(){
    FIO();
    memset(dp, -1, sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<solve(0)<<endl;
    return 0;
}
