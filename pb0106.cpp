#include<iostream>
using namespace std;
#define ll long long
ll checksum(string str){
	ll sum = 0;
	for(unsigned int i=0; i<str.length(); i++){
		if(str[i] != 32){
			sum+= (i+1)*(str[i] - 64);
		}
	}
	return sum;
}
int main(){
	string str;
	while(getline(cin,str) and str!="#"){
		cout<<(ll)checksum(str);
		cout<<endl;
	}
	return 0;
}