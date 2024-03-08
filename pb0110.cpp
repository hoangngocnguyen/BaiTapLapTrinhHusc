#include<iostream>
#include<map>
#include<string>
#include<cctype>
using namespace std;

bool KT_KiTu(char chr){
	if((chr >= 'A') and (chr<= 'z')){
		return true;
	}
	return false;
}
int count_st(string str){
	//tao map luu so lan xuat hien cua cac ki tu
	
	map<char, int> myMap;
	for(unsigned int i=0; i<str.length(); i++){
		// loai cac so ra
		if(KT_KiTu(str[i]) == true){
			//chuyen ve chu thuong het
			char chr = tolower(str[i]);
			myMap[chr]++;
		}
	}
	//dem so ki tu khac nhau = so phan tu cua myMap
	return myMap.size();
}
int main(){
	string str;
	getline(cin, str);
	
	int cnt = count_st(str);
	cout<<cnt;
	return 0;
}