#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b>c) and (b+c>a) and (a+c>b)) {
		if((a==b) or (a==c) or (b==c)){
			if ((a==b) and (b==c)){
				cout<<"Tam giac deu";
			}
			else {
				cout<<"Tam giac can";
			}
		}
		else {
			cout<<"Tam giac thuong";
		}	
	}
	return 0;
}
