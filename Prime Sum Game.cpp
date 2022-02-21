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


bool prime(int x){
    if(x == 2) return true;
    if(x%2 == 0 || x < 2) return false;
    for(int i=3;i*i<=x;i+=2){
        if(x%i == 0) return false;
    }
    return true;
}

int main(){

    fastInputOutput();
    int a, b, c, d;cin>>a>>b>>c>>d;
    bool aw = 0;
    for(int i=a;i<=b;i++){
        aw = 0;
        for(int k=c;k<=d;k++){
            if(prime(i+k)){
                aw = 1;
                break;
            }
        }
        if(!aw){
            cout<<"Takahashi\n";
            return 0;
        }
    }
    cout<<"Aoki\n";
    return 0;
}
