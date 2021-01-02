/*
	author: GMKanat
	created: 21.12.2020 22:40
*/

#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
bool isPrime(int n) {
    if (n < 2) return false; // add this line
    bool answer = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            answer = false;
        }
    }
    return answer;
}

int main() {
	gg;
	cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    string k;
    for(int i=0; i< 20219;i++){ // note: the global "counter" is shadowed here
        if(isPrime(i)){
           k += to_string(i);
        }
    }
    while(n--){
    	int t; cin >>t;
	    cout << k[t-1];
    }
    

    return 0;
}