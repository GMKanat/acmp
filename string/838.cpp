#include<bits/stdc++.h>
using namespace std;
int san1(char a){
	int k = a - 'A'+1;
	int sum = 0;
	while (k!=0)
    {
        sum += k%10;
        k /= 10;
    }
    return sum;
}
int san2(char a){
	int k = a - 'a'+1;
	int sum = 0;
	while (k!=0)
    {
        sum += k%10;
        k /= 10;
    }
    return sum;
}


int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	 int sum=0;
	 string temp;
	 string k;
	 while (getline(cin, temp)){
	  	k+=temp;
	 }
	 for(int i = 0; i < k.size(); i++){
	 	if(isupper(k[i])){
	 		sum += san1(k[i]) + 10;
	 		
	 	}
	 	else if(islower(k[i])){
	 		sum += san2(k[i]);
	 	
	 	}
	 	else if(k[i] == ' '){
	 		sum += 4;
	 		
	 	}
	 	else if(isdigit(k[i])){
	 		sum += 13 - k[i]+'0';
	 		
	 	}
	 	else if(k[i] == ','){
	 		sum+=2;
	 		
	 	}
	 	else if(k[i] == '.'){
	 		sum+=5;
	 	
	 	}
	 	else if(k[i] == ';'){
	 		sum+=7;
	 		
	 	}
	 	else if(k[i] == '=' || k[i] == '+' || k[i] == '-'|| k[i] == '"'|| k[i] == '\''){
	 		sum+=3;
	 	
	 	}
	 	else if(k[i] == '(' || k[i] == ')'){
			sum += 1;
	
	 	}
	 	else{
	 		sum += 8;

	 	} 
	 }

	 cout << sum;

}