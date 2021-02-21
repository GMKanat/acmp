#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)



int main(){
	Speed;
	deque <int> deq;
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		if(x == 1){
			int k;
			cin >> k;
			deq.push_front(k);
		}
		if(x == 2){
			int k;
			cin >> k;
			deq.push_back(k);
		}
		if(x == 3){
			cout << deq.front() << " ";
			deq.pop_front();
			
		}
		if(x == 4){
			cout << deq.back() << " ";
			deq.pop_back();
		}
	}	
}