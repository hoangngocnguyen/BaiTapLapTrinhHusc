#include<iostream>
#include<string>
using namespace std;

string ma_hoa_url(string str){
	string kq_mahoa = "";
	for(unsigned int i=0; i<str.length(); i++){
		switch(str[i]){
			case ' ':
				kq_mahoa = kq_mahoa + "%20";
				break;
			case '!':
				kq_mahoa = kq_mahoa + "%21";
				break;
			case '$':
				kq_mahoa = kq_mahoa + "%24";
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
	return kq_mahoa;
}

int main(){
//	#ifndef ONLINE_JUDGE
//		freopen("pb0107.inp", "r", stdin);
//	#endif
	
	int n;	cin>>n;
	cin.ignore();
	string str;
	for(int i=1; i<=n; i++){
		getline(cin, str);
		string mahoa = ma_hoa_url(str);
		cout<<"Case #"<< i <<": "<<	mahoa <<endl;
		
	}
	return 0;
}