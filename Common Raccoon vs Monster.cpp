#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    fastInputOutput();
    int h,n;cin>>h>>n;
    int totalMoves = 0;
    for(int i=0;i<n;i++){
        int value;cin>>value;
        totalMoves += value;
    }
    cout<<(h-totalMoves <= 0 ? "Yes":"No")<<endl;
    return 0;
}

