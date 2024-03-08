#include<bits/stdc++.h>
using namespace std;

int Lucas(int n){
	if(n==0){
		return 2;
	}
	if(n==1){
		return 1;
	}
	if(n>=2){
		return Lucas(n-1) + Lucas(n-2);
	}
	return 0;	
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		cout<<Lucas(i)<<" ";
	}
	return 0;
}
