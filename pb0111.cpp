#include<iostream>
#include<map>
#include<string>
#include<cctype>
using namespace std;

bool KT_KiTu(char chr){
	if(((chr>= 'A') and (chr<='z')) or (chr>='0' and chr<='9')){
		return true;
	}
	return false;
}
void TanSuat_KiTu(string str){
	//tao map luu so lan xuat hien cua cac ki tu
	map<char, int> myMap;
	// luu tan suat vao
	for(unsigned int i=0; i<str.length(); i++){
		//chi dem: a-z A-Z 0-9
		if(KT_KiTu(str[i]) == true){
			char chr = str[i];
			myMap[chr]++;
		}
	}
	// in tan suat ra
	for(const auto& pair : myMap){
		cout<<pair.first<<"\t"<<pair.second<<"\n";
	}
	
}
int main(){
	string str;
	getline(cin, str);
	
	TanSuat_KiTu(str);
	return 0;
}