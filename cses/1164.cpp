#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({y,x});
    }       
    sort(v.rbegin(), v.rend());
    int cnt = 0;
    int q;
    while(!v.empty()){
        q = v.back().first;
        v.pop_back();
        for(int i = v.size() - 1; i >= 0; i--){
            if(q < v[i].second){
                q = v[i].first;
                v.erase(v.begin() + i);
                i--;
            }
        }
        cnt++;
    }
    cout << cnt << "\n";
}