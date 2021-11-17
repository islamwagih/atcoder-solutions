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

set<int> prv;
int main(){
    fastInputOutput();
    int n;cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        int minElem = INT_MAX, maxElem = INT_MAX, curr = arr[i];
        if(!prv.empty()){
            minElem = *prv.begin();
            maxElem = *prv.rbegin();
        }
        if(curr <= minElem && curr <= maxElem){
            cnt++;
        }
        prv.insert(curr);
    }
    cout<<cnt<<endl;
    return 0;
}
