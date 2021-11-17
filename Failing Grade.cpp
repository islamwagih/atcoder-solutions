#include <bits/stdc++.h>
#define EPS 1e-9
#define endl '\n'
#define MOD(_a, _n) (((a%n)+n)%n)
#define getSize(_s) (int)_s.size()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

const int N = 1e5+5;
const int inf = 2e9+1;



int main(){
    fastInputOutput();
    int n,p;cin>>n>>p;
    int f = 0;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        if(val < p) f++;
    }
    cout<<f<<endl;
    return 0;
}
