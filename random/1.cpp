#include <bits/stdc++.h>
using namespace std;

struct Base {
    void f(int i) {
        cout << "i";
    }
};

struct Extended: Base{
    void f(double i){
        cout << "d";
    }
};

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    Extended e;
    int i = 0;
    e.f(i);
}
