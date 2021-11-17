#include <bits/stdc++.h>
#define EPS 1e-9
#define endl '\n'
using namespace std;
typedef long long ll;

inline void fastInputOutput(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}



int main(){

    fastInputOutput();
    int n;cin>>n;
    vector<pair<int, int>> cities(n);
    double avg = 0;
    for(int i=0;i<n;i++){
        cin>>cities[i].first>>cities[i].second;
    }
    sort(cities.begin(), cities.end());
    int fact = 0;
    do{
        ///distance between first and second + distance between second and third ......
        ///sqrt((Xa - Xb)^2 + (Ya - Yb)^2) + sqrt((Xb - Xc)^2 + (Yb - Yc)^2)
        for(int i=0;i<n-1;i++){
            double curr = sqrt((cities[i].first - cities[i+1].first)*(cities[i].first - cities[i+1].first) + (cities[i].second - cities[i+1].second)*(cities[i].second - cities[i+1].second));
            avg += curr;
        }

        fact++;

    }while(next_permutation(cities.begin(), cities.end()));

    avg /= fact;
    cout<<fixed<<setprecision(10)<<avg<<endl;

    return 0;
}

