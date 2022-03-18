#include <bits/stdc++.h>
using namespace std;
inline void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 1e5;

int main(){
    fast();
    int n;cin>>n;
    vector<int> arr(n);
    for(int& i:arr)cin>>i;
    vector<int> pre(arr.begin(), arr.end()), suf(arr.begin(), arr.end());
    for(int i=1;i<n;i++) pre[i] = __gcd(pre[i], pre[i-1]);
    for(int i=n-2;i>=0;i--) suf[i] = __gcd(suf[i], suf[i+1]);
    int mx = -1;
    for(int i=1;i<n-1;i++){
        mx = max(mx, __gcd(pre[i-1], suf[i+1]));
    }
    mx = max(mx, suf[1]);
    mx = max(mx, pre[n-2]);
    cout<<mx<<endl;
    return 0;
}
