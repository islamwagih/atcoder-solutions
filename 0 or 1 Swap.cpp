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

bool isEqual(int* arr1, int* arr2, int n){
    for(int i=0;i<n;i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    fastInputOutput();
    int n;cin>>n;
    int* arr = new int[n], *cpy = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cpy[i] = i+1;
    }

    if(!isEqual(arr, cpy, n)){;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i] > arr[j]){
                    swap(arr[i], arr[j]);
                    if(isEqual(arr, cpy, n)){
                        cout<<"YES\n";
                        return 0;
                    }else{
                        swap(arr[i], arr[j]);
                    }
                }
            }
        }
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
    return 0;
}
