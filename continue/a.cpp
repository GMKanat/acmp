#include <bits/stdc++.h>
using namespace std;




int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int n;
    cin >> n;
    n *= 2;
    int q = INT_MAX, w = INT_MAX;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }       
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    bool k = false;
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i+1]){
            k = true;
            break;
        }
    }
    int cnt = 0;
    if(!k){
        cout << cnt  << "\n";
        return 0;
    }
    for(int j = 0; j < 2000; j++){
        for(int i = 0; i < n-1; i+=2){
            swap(a[i], a[i + 1]);
        }
        // for(int i = 0; i < n; i++){
        //     cout << a[i] << " ";
        // }
        // cout << "\n";
        cnt++;
        k = false;
        for(int i = 0; i < n - 1; i++){
            if(a[i] > a[i+1]){
                k = true;
                break;
            }
        }
        if(!k){
            q = cnt;
            break;
        }
        int c[n];
        for(int i = 0; i < n/2; i++){
            c[i + n/2] = a[i];
        }
        for(int i = n/2; i < n; i++){
            c[i - n/2] = a[i];
        }
        for(int i = 0; i < n; i++){
            a[i] = c[i];
        }
        // for(int i = 0; i < n; i++){
        //     cout << a[i] << " ";
        // }
        // cout << "\n";
        cnt++;
        k = false;
        for(int i = 0; i < n - 1; i++){
            if(a[i] > a[i+1]){
                k = true;
                break;
            }
        }

        if(!k){
            q = cnt;
            break;
        }
    }

    cnt = 0;
    for(int j = 0; j < 2000; j++){
        int c[n];
        for(int i = 0; i < n/2; i++){
            c[i + n/2] = b[i];
        }
        for(int i = n/2; i < n; i++){
            c[i - n/2] = b[i];
        }
        for(int i = 0; i < n; i++){
            b[i] = c[i];
        }
        // for(int i = 0; i < n; i++){
        //     cout << b[i] << " ";
        // }
        cnt++;
        k = false;
        for(int i = 0; i < n - 1; i++){
            if(b[i] > b[i+1]){
                k = true;
                break;
            }
        }
        if(!k){
            w = cnt;
            break;
        }
        for(int i = 0; i < n-1; i+=2){
            swap(a[i], a[i + 1]);
        }
        cnt++;
        k = false;
        for(int i = 0; i < n - 1; i++){
            if(b[i] > b[i+1]){
                k = true;
                break;
            }
        }
        if(!k){
            q = cnt;
            break;
        }
    }
    // cout << q << " " << w << "\n";
    if(min(q,w) != INT_MAX){
        cout << min(q,w) << "\n";
    }
    else cout << "-1";
}