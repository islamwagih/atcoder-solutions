#include <bits/stdc++.h>
#define EPS 1e-9
#define endl '\n'
#define MOD(_a, _n) (((a%n)+n)%n)
#define getSize(_s) (int)_s.size()
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

const int N = 2e3+5;
const int inf = 1e5+5;
const int M = 2*N;
const int mod = 1e9+7;


ll squaredDis(ll x1, ll y1, ll x2, ll y2){
    ll firstTerm = x1-x2;
    firstTerm*=firstTerm;
    ll secTerm = y1-y2;
    secTerm*=secTerm;
    return firstTerm+secTerm;
}



int main(){
    fastInputOutput();
    ll x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    bool found = 0;
    for(ll x=x1-3;x<=x1+3;x++){
        for(ll y=y1-3;y<=y1+3;y++){
            if(squaredDis(x, y, x1, y1) == 5 && squaredDis(x, y, x2, y2) == 5){
                found = 1;
                break;
            }
        }
    }
    if(found) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
