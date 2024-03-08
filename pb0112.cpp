#include<iostream>
#include<map>
#include<string>
using namespace std;

int xau_AZ(string str){
	int indexA, indexZ;
	//tim vi tri cua A dau tien
	for(unsigned int i=0; i<str.length(); i++){
		if(str[i] == 'A'){
			indexA = i;	
			break;
		}	
		
	}
	//tim vi tri cua Z cuoi cung
	for(unsigned int i=str.length()-1; i>=0; i--){
		if(str[i] == 'Z'){
			indexZ = i;	
			break;
		}	
			
	}
	// tra ve do dai xau AZ
	int doDai = indexZ - indexA +1;
	return doDai;
}
int main(){
	string str;
	getline(cin, str);
	
	int doDai = xau_AZ(str);
	cout<<doDai;
	return 0;
}