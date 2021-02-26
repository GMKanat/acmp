#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); 
map<ll, ll> mp;
map<ll, bool> mpp;
ll rec(ll n){
    if(n < 3){
        return 0;
    }
    if(n == 3){
        return 1;
    }
    if(mpp[n]){
        return mp[n];
    }
    mpp[n]=1;
    mp[n]=rec(n/2)+rec(n-n/2);
    return mp[n];
}
 
 
 
int main(){
    Speed;
    ll n;
    cin >> n;
    cout << rec(n);
}