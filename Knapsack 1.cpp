#include <bits/stdc++.h>
using namespace std;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

const int N = 104, W = 100004;
long long memo[N][W];
int n,w,weights[N],values[N];
long long solve(int idx, int capacity){
    ///base case
    if(capacity == 0 || idx == n){
        return 0;
    }
    ///get it if calculated before
    if(memo[idx][capacity] != -1){
        return memo[idx][capacity];
    }
    ///leave
    memo[idx][capacity] = solve(idx+1, capacity);
    ///take it
    if(weights[idx] <= capacity){
        memo[idx][capacity] = max(values[idx]+solve(idx+1, capacity-weights[idx]), memo[idx][capacity]);
    }
    return memo[idx][capacity];
}
int main(){
    fastInputOutput();
    cin>>n>>w;
    for(int i=0;i<N;i++){
        for(int j=0;j<W;j++){
            memo[i][j] = -1;
        }
    }
    for(int i=0;i<n;i++){
        cin>>weights[i]>>values[i];
    }
    cout<<solve(0, w)<<endl;
    return 0;
}
