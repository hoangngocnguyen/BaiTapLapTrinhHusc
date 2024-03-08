#include<iostream>
#include<string>
using namespace std;

bool kitu_dacbiet(char chr){
	if((chr == '\'') or (chr == '.')
	or (chr == ',')
	or (chr == ';')
	or (chr == ':' )){
		return true;
	}	
	return false;
}
string DaoTu(string str){
	//tao 1 xau ketqua, 1 xau tam thoi (reset lien tuc)
	string rs;
	//chay nguoc xau, loai ki tu dac biet
	
	for(int i=0; i<str.length(); i++){
		string temp="";
		// lay 1 chu
		while(str[i] != ' '){
			if(kitu_dacbiet(str[i]) == false){
				//cong ki tu vao truoc
				temp = temp + str[i];
			}
			//nhay den ki tu tiep
			i++;
		}
		
		rs = "" + temp + rs;
	}
	return rs;
}
int main(){
	string str;
	getline(cin, str);
	
	string rs = DaoTu(str);
	cout<<rs;
	return 0;
}