#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin >> s;
   s+="     ";
   int cnt = 0;
   for(int i = 0; i < s.size(); i++){
   		
		if(isdigit(s[i]) && isdigit(s[i+1]) && isdigit(s[i+2]) && isdigit(s[i+3])) {
	   		string k = s.substr(i, 4);
	   		stringstream ss(k);
	   		int x;
	   		ss >> x;
	   		i+=4;
	   		while(x--){
	   			cout << s[i];
	   			cnt++;
	   			if(cnt == 40){
		   		 cout << endl;
		   		 cnt = 0;
		   		}
	   		}
	   	}
		else if(isdigit(s[i]) && isdigit(s[i+1]) && isdigit(s[i+2])){
	   		string k = s.substr(i, 3);
	   		stringstream ss(k);
	   		int x;
	   		ss >> x;
	   		i+=3;
	   		while(x--){
	   			cout << s[i]; 
	   			cnt++;
	   			if(cnt == 40){
		   		 cout << endl;
		   		 cnt = 0;
		   		}
	   		}
	   	}
	   	else if(isdigit(s[i]) && isdigit(s[i+1])){
	   		string k = s.substr(i, 2);
	   		stringstream ss(k);
	   		int x;
	   		ss >> x;
	   		i+=2;
	   		while(x--){
	   			cout << s[i];
	   			cnt++;
	   			if(cnt == 40){
		   		 cout << endl;
		   		 cnt = 0;
		   		}
	   		}
	   	}
	   	else if(isdigit(s[i])){
	   		int t = s[i] - '0';
	   		i++;
	   		while(t--){
	   			cout << s[i];
	   			cnt++;
	   			if(cnt == 40){
		   		 cout << endl;
		   		 cnt = 0;
		   		}
	   		}
	   	}
	   	else if(s[i] == ' '){
	   		break;
	   	}
	   	else{
	   	   cout << s[i];
	   	   cnt++;
	   	   if(cnt == 40){
	   		   cout << endl;
	   		   cnt = 0;
   		   }
	   	}

   }
}