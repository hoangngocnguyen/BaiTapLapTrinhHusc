#include<iostream>
using namespace std;

void ma_hoa_url(string str){
	string kq_mahoa;
	for(int i=0; i<str.length; i++){
		switch(str[i]){
			case ' ':
				kq_mahoa = kq_mahoa + "%20";
				break;
			case '!':
				kq_mahoa = kq_mahoa + "%21";
				break;
			case '!':
				kq_mahoa = kq_mahoa + "%24";
				break;
			case '$':
				kq_mahoa = kq_mahoa + "%25";
				break;
			case '%':
				kq_mahoa = kq_mahoa + "%25";
				break;
			case '(':
				kq_mahoa = kq_mahoa + "%28";
				break;
			case ')':
				kq_mahoa = kq_mahoa + "%29";
				break;
			case '*':
				kq_mahoa = kq_mahoa + "%2a";
				break;
			default:
				kq_mahoa = kq_mahoa + str[i];
				break;
		}
	}
	cout<< kq_mahoa;
}

int main(){
	string str;
	int n;	cin>>n;
	for(int i=0; i<n; i++){
		getline(cin, str);
		ma_hoa_url(str);
	}
	return 0;
}