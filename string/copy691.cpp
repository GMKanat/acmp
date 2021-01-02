#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  set<char> s;
  string j = "ABCEHKMOPTXY";
  for(int i=0;i<j.size();i++){
      s.insert(j[i]);
  }
  cin>>n;
  string p;
  while(n--){
    cin>>p;
    if(p.size()==6){
        if(s.find(p[0])!=s.end()&&'0'<=p[1]<='9'&&'0'<=p[2]<='9'&&'0'<=p[3]<='9'&&s.find(p[4])!=s.end()&&s.find(p[5])!=s.end()){
          cout<<"Yes\n";
        }else{
          cout<<"No\n";
        }
    }else{
        cout<<"No\n";
    }
  }
}