#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 2;
    int y = 1;
    for(int i = 0; i < 100; i++){
        int z = x;
        x = x + y;
        y = z;
        cout << x << " ";
    }
}

/*
1 0 0 1 0

2 0 0 1 1

2 1 0 1 2
1 1 0 1 1
2 1 0 2 1
    
*/