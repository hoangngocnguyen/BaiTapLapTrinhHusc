#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,giaithua=1;
	cin>>n;
	if((n==0) or(n==1)){
		cout<<"1";
	}
	else if(n%2==1){
		for(int i=1;i<=n;i+=2){
			giaithua=giaithua*i;
			
		}
		cout<<giaithua;
	}
	else{
		for(int i=2;i<=n;i+=2){    // ho?c i+=2;
			giaithua=giaithua*i;
		}
		cout<<giaithua;
		
	}
	return 0;
	
}