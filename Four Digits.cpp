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

int len(int num){
    if(num == 0) return 1;
    int sz = 0;
    while(num){
        sz++;
        num/=10;
    }
    return sz;
}

int main(){
    fastInputOutput();
    int n;cin>>n;
    int sz = len(n);
    for(int i=0;i<4-sz;i++) cout<<0;
    cout<<n;
    return 0;
}
