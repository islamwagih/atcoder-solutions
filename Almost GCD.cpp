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


int main(){
    fastInputOutput();
    int n;cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxGCD = 0, res = 0;
    for(int i=2;i<=1000;i++){
        int cnt = 0;
        for(int a=0;a<n;a++){
            if(arr[a]%i==0){
                cnt++;
            }
        }
        if(maxGCD < cnt){
            maxGCD = cnt;
            res = i;
        }
    }
    cout<<res<<endl;
    return 0;
}
