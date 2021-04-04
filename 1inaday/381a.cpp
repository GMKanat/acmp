/**
 * 		author:  GMKanat
 * 		created: 04.01.2021 01:01:28
**/
#include <bits/stdc++.h>
using namespace std;
#define gg freopen("input.txt", "r+", stdin);

struct Pos {
	int i; 
	int j;
	Pos(const int t, const int j)
		: i(i)
		, j(j)
	{}
};


int main(){
	gg;
	const int WALL = -1;
	const int UNDEF = -1;
	int n; cin >> n;
	vector<vector<int>>len(1 + n + 1, vector<int>(1 + n + 1, UNDEF));
	vector<vector<char>>a(1 + n + 1, vector<char>(1 + n + 1, 'O'));
	
	queue<Pos> q;
	int dstI = UNDEF;
	int dstJ = UNDEF;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j]  == 'X'){
				assert(dstI == UNDEF);
				assert(dstJ == UNDEF);
				a[i][j] = '.';
				dstI = i;
				dstJ = j;
			}
			else if(a[i][j] == '@'){
				assert(q.empty());
				q.push(Pos(i, j));
				len[i][j] = 0;
			} else{
				assert(a[i][j] == 'O' || a[i][j] == '.');
			}
		}
	}

	assert(dstI != UNDEF);
	assert(dstJ != UNDEF);

	while(!q.empty()){
		Pos cur = q.front();
		q.pop();
		for(int di = -1; di <= 1; di++){
			for(int dj = -1; dj <= 1; dj++){
				if(di*di + dj*dj == 1){
					int ni = cur.i + di;
					int nj = cur.j + dj;
					if(a[ni][nj] == '.' && len[ni][nj] == UNDEF){
						len[ni][nj] == len[cur.i][cur.j] + 1;
						q.push(Pos(ni, nj));
					}
				}
			}
		}
	}
	cout << 1;	

	if(len[dstI][dstJ] == UNDEF){
		cout << "N";
		return 0;
	}
	int i = dstI;
	int j = dstJ;
	while(1){
		
		assert(a[i][j] == '.');
		a[i][j] = '+';
		int found = 0;
		for(int di = -1; di <= 1 && !found; di++){
			for(int dj = -1; dj <= 1 && !found; dj++){
				if(di*di + dj*dj == 1){
					int ni = i + di;
					int nj = j + dj;
					if(len[ni][nj] == len[i][j] -1){
						i = ni;
						j = nj;
						found = 1;
					}
				}
			}
		}
		assert(found);
		if(a[i][j] == '@'){
			break;
		}
	}
	cout << "Y" << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j];
		}
		cout << endl;
	}
}