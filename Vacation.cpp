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
int dp[N][4];
int arr[N][3];
int solve(int i, int lst){
    if(i == n) return 0;
    int& ans = dp[i][lst];
    if(~ans) return ans;
    ans = 0;
    if(lst == 0){
        //do one or two
        ans = max(ans, arr[i][1]+solve(i+1, 1));
        ans = max(ans, arr[i][2]+solve(i+1, 2));
    }else if(lst == 1){
        //do zero or two
        ans = max(ans, arr[i][0]+solve(i+1, 0));
        ans = max(ans, arr[i][2]+solve(i+1, 2));
    }else if(lst == 2){
        //do zero or one
        ans = max(ans, arr[i][0]+solve(i+1, 0));
        ans = max(ans, arr[i][1]+solve(i+1, 1));
    }else{
        //do zero or one or two
        ans = max(ans, arr[i][0]+solve(i+1, 0));
        ans = max(ans, arr[i][1]+solve(i+1, 1));
        ans = max(ans, arr[i][2]+solve(i+1, 2));
    }
    return ans;
}

int main(){
    FIO();
    memset(dp, -1, sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    cout<<solve(0, 3)<<endl;
    return 0;
}
