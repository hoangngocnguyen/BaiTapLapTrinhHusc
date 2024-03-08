#include<iostream>
#include<map>
#include<string>
using namespace std;

bool KT_Xau(string str){
	//tao map luu so lan xuat hien cua cac ki tu
	map<char, int> myMap;
	for(unsigned int i=0; i<str.length(); i++){
		char chr = str[i];
		myMap[chr]++;
	}
	// kiem tra, neu xuat hien >1 lan thi xu li
	for(const auto& pair : myMap){
		if(pair.second >1 ){
			return false;
		}
	}
	return true;
}
int main(){
	string str;
	getline(cin, str);
	
	if(KT_Xau(str) == true){
		cout<<"Yes";
	}
	else	cout<<"No";
	return 0;
}