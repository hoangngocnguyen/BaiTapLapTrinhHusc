#include<bits/stdc++.h>
using namespace std;
void TronXauMK(string O, string E){
	string P="";
	

	if(O.length() >= E.length()){
		while((E.length()!=0)) {
			P = P + O[0] + E[0];
			O.erase(O.begin());	
			E.erase(E.begin());	
		}
		P+= O;
		cout<<P;
	}
	else{
		while((O.length()!=0)) {
			P = P + O[0] + E[0];
			O.erase(O.begin());	
			E.erase(E.begin());	
		}
		P+=E;
		cout<<P;
	}
				
}
int main(){
	string O, E;
	cin>>O;
	cin>>E;
	
	TronXauMK(O, E);
	return 0;
}