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

int main(){
    fastInputOutput();
    string a, b;cin>>a>>b;
    int sum1 = 0, sum2 = 0;
    for(int i=0;i<getSize(a);i++){
        sum1+=a[i]-48;
        sum2+=b[i]-48;
    }
    cout<<max(sum1, sum2)<<endl;
    return 0;
}
