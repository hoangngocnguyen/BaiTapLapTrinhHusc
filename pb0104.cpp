#include<bits/stdc++.h>
using namespace std;
bool KiemTraChuHoa(char chr){
	if((chr>='A') and (chr<= 'Z')){
		return true;
	}
	return false;
}
int main(){
	string st;
	while(getline(cin, st)){
		int cnt = 0;
		for(unsigned int i=0; i< st.length(); i++){
			// dem so chu Hoa trong xau
			if(KiemTraChuHoa(st[i]) == true){
				cnt++;
			}
		}
		// cong voi tu dau tien trong xau
		cout<<cnt + 1<<endl;
	}
	return 0;
}