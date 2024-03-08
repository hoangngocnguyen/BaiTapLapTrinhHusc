#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,x,y,count=0;
	cin>>a>>b>>c>>x>>y;
	if(((a<=x) and (b<=y)) or ((a<=y) and (b<=x))){
		count++;
	}
	if(((a<=x) and (c<=y)) or ((a<=y) and (c<=x))){
		count++;
	}
	if(((c<=x) and (b<=y)) or ((c<=y) and (b<=x))){
		count++;
	}
	if (count>=1){
		cout<< "Yes";
	}
	else{
		cout<<"No";
	}
	
	return 0;
}
