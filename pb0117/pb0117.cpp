#include<iostream>
#include<string>
using namespace std;

void Slove() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
void TinhHoaDon(string &st){
	string rs = "";
	int sodien[2];
	unsigned int i=0;
	//luot bo ho ten khach hang
	while(!(st[i] == '-' or 
			st[i] == '_' or
			st[i] == ';' or
			st[i] == '.' or
			st[i] == ',' or
			st[i] == '/' or
			st[i] == '|' )) {
				i++;
	}
	for(int k=0; i<st.length(); i++){
		//kiem tra ki tu co phai so?
		//neu dung thi xu li so
		while(isdigit(st[i])){
			rs = rs + st[i];
			i++;
			if(i == st.length()){
				break;
			}
		}
		if(rs.length() != 0 ){
			 //chuyen string sang int
			sodien[k] = stoi(rs);
			k++;
			//reset chuoi
			rs = "";
		}
		
	}
	long long tongtien = abs(1200*(sodien[1] - sodien[0]));
	cout<<tongtien;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("pb0117.inp", "r", stdin);
	#endif
	Slove();
	string st;
	getline(cin, st);
	TinhHoaDon(st);
	return 0;
}