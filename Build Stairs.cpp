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

int main(){
    fastInputOutput();
    int n;cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ///let's optimize first
    for(int i=n-2;i>-1;i--){
        ///check if the next is smaller if so decrease by one
        if(arr[i] > arr[i+1]){
            arr[i]--;
        }
    }
    ///check if it is sorted if so YES otherwise NO
    for(int i=n-2;i>-1;i--){
        if(arr[i] > arr[i+1]){
            cout<<"No\n";
            delete[] arr;
            return 0;
        }
    }
    cout<<"Yes\n";
    delete[] arr;
    return 0;
}
