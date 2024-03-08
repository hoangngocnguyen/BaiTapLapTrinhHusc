#include<bits/stdc++.h>
using namespace std;

string UpperStr(string str){
	for(long unsigned i=0;i<str.size();i++){
		if((str[i]>='a') and (str[i]<= 'z')){
			str[i] = str[i] - 32; 
		}
	}
	return str;
}
string LowerStr(string str){
	for(long unsigned i=0;i<str.size();i++){
		if((str[i]>='A') and (str[i]<= 'Z')){
			str[i] = str[i] + 32; 
		}
	}
	return str;
}
void chuHoachuThuong(string text){
	long unsigned countUpper=0,countLower=0;
		for(long unsigned j=0;j<text.size();j++){
			if((text[j]>='A') and (text[j]<='Z')){
				countUpper++;
			}
			if((text[j]>='a') and (text[j]<='z')){
				countLower++;
			}
		}
		
		if(countUpper> countLower ){
			text= UpperStr(text);
			cout<<text;
		}
		else{
			text= LowerStr(text);
			cout<<text;
		}
		cout<<endl;
}
int main(){
	string st1;
	while(getline(cin,st1)){
	   chuHoachuThuong(st1);
	}
	return 0;
}