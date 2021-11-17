#include <bits/stdc++.h>
#define EPS 1e-9
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

///a > b
int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }
    return gcd(b, a%b);
}

int gcd(int a, int b, int c){
    int ans = gcd(b, c);
    if(ans > a){
        return gcd(ans, a);
    }
    return gcd(a, ans);
}

int main(){
    fastInputOutput();
    int k;cin>>k;
    ull total = 0;
    for(int a=1;a<=k;a++){
        for(int b=1;b<=k;b++){
            for(int c=1;c<=k;c++){
                total += gcd(a, b, c);
            }
        }
    }
    cout<<total<<endl;
    return 0;
}
