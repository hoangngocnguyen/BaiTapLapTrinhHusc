#include<iostream>
#include<string>
using namespace std;

string Xoay_Trai_Xau(string str, int k){
	//su dung 1 xau de luu ket qua
	string rs="";
	//tinh vi tri can xoay
	int vitrixoay = k % str.length();
	// lay xau tu vi tri xoay den het xau
	rs = rs+ str.substr(vitrixoay, str.length() - vitrixoay + 1);
	//chen xau con lai vao cuoi
	rs = rs + str.substr(0, vitrixoay);
	//tra ve ket qua
	return rs;
}
int main(){
	string str;
	int k;
	cin>>k;
	cin.ignore();
	getline(cin, str);
	
	string rs = Xoay_Trai_Xau(str, k);
	cout<<rs;
	return 0;
}