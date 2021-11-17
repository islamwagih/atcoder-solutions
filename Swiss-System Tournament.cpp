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


class comp{
public:
    bool operator()(pair<int, int> a, pair<int, int> b){
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
};

///{wins, id}
priority_queue<pair<int, int>, vector<pair<int ,int>>, comp> pq;

int main(){
    fastInputOutput();
    int n,m;cin>>n>>m;
    char matrix[101][101];
    for(int i=1;i<=2*n;i++){
        for(int k=1;k<=m;k++){
            cin>>matrix[i][k];
        }
    }
    for(int i=1;i<=2*n;i++) pq.push({0, i});
    for(int round=1;round<=m;round++){
        vector<pair<int, int>> currRound;
        while(!pq.empty()){
            pair<int, int> p1 = pq.top();pq.pop();
            pair<int, int> p2 = pq.top();pq.pop();
            char p1Play = matrix[p1.second][round], p2Play = matrix[p2.second][round];
            if(p1Play != p2Play){
                if(p1Play == 'G' && p2Play == 'C'){
                    p1.first++;
                }else if(p1Play == 'C' && p2Play == 'P'){
                    p1.first++;
                }else if(p1Play == 'P' && p2Play == 'G'){
                    p1.first++;
                }else{
                    p2.first++;
                }
            }
            currRound.push_back(p1);
            currRound.push_back(p2);
        }
        pq = priority_queue<pair<int, int>, vector<pair<int ,int>>, comp>(currRound.begin(), currRound.end());
    }
    while(pq.size()){
        cout<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}
