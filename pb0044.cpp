#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sodu;
	string so16="";
	cin>>n;
	while(n!=0){
		sodu= n%16;
		n/=16;
		if(sodu==10){
			so16= "A" + so16;
		}
		else if(sodu==11){
			so16= "B" + so16;
		} 
		else if(sodu==12){
			so16= "C" + so16;
		}
		else if(sodu==13){
			so16= "D" + so16;
		}
		else if(sodu==14){
			so16= "E" + so16;
		}
		else if(sodu==15){
			so16= "F" + so16;
		}
		else{
			so16= to_string(sodu) + so16;
		}
	}
	cout<<so16;
	return 0;
	
}