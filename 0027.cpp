#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,temp;
	long b;
	cin>>a>>b;
	if(b==0) cout<<'1';
	if((a%10==0) or (a%10==1) or (a%10==5) or (a%10==6) ){
		cout<<a%10;
		
	}
	if((a%10==3) or (a%10==7)){
		temp= pow(a,b%4);
		cout<<temp%10;
	}
	if((a%10==2) or (a%10==8)){
		temp=pow(a,b%4)*6;
		cout<<temp%10;
	}
	if ((a%10==4)){
		if(b%2==1) cout<<'4';
		else cout<<'6';
	}
	if ((a%10==9)){
		if(b%2==1) cout<<'9';
		else cout<<'1';
	}
	
	return 0;
}
