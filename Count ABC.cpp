#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    fastInputOutput();
    int n;cin>>n;
    string s;cin>>s;
    int total = 0;
    for(int i=0;i<n-2;i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            total++;
        }
    }
    cout<<total<<endl;
    return 0;
}
