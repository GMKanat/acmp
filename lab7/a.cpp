#include <bits/stdc++.h>
using namespace std;
int deg(int n){
    return pow(2, n);
}


int main(){
    int n;
    cin >> n;
    cout << deg(n);
}