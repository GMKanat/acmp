#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
    int k1, k2; 
    string s; 
    cin >> s; 
    for(int i = 1; i < s.size(); ++i){ 
        k1 = 0, k2 = 0; 
        for(int j = 0; j < i; ++j) 
        k1+=s[j] - 48; 
        for(int j = i; j < s.size(); ++j) 
        k2+=s[j] - 48; 
        while(k1 >= 10 || k2 >= 10){ 
            k1%=9; k2%=9; 
        } 
        if(k2 == k1){ 
            cout << "YES"; 
            return 0; 
            
        } 
        
    } 
    cout << "NO"; 
    return 0; 
    
}
