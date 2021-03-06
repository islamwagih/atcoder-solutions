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

map<int, int> frq;
int main(){
    fastInputOutput();
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        frq[val]++;
    }
    for(auto elem:frq){
        if(elem.second > 1){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
