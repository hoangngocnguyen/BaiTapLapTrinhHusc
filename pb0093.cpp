#include<bits/stdc++.h>
using namespace std;

long long luythua(long long a,long long n){
	while(n>=1){
		return a*luythua(a,n-1);
	}
	return 1; // khi nay, while se khong chay nua.
}
int main(){
	long long x,n,S=0;
	cin>>x>>n;
	for(int i=2;i<=n;i+=2){
		S=S+ luythua(x,i);
	}
	cout<<S;
	return 0;
}