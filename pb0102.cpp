#include<bits/stdc++.h>
using namespace std;
bool KiemTraNguyenAm(char kitu, string st, int length){
	for(unsigned int i=0; i< st.length(); i++){
			if(kitu =='a' or kitu== 'o' or kitu== 'y'
			or kitu== 'i' or kitu== 'e' or kitu== 'u'
			or kitu== 'A' or kitu== 'O' or kitu== 'Y'
			or kitu== 'I' or kitu== 'E' or kitu== 'U'){
				return true;
			}
		}
	return false;
}
int main(){
	string st;
	while(getline(cin,st)){
		int CountNguyenAm=0;
		for(unsigned int i=0; i< st.length(); i++){
			if(KiemTraNguyenAm(st[i], st, st.length()) == true ){
				CountNguyenAm++;
			}
		}
		cout<< CountNguyenAm << endl;
	}
	return 0;
}