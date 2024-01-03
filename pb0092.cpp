#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll daonguoc(ll n){
	long long sodu=0,sodao=0;
	while(n!=0){
		sodu=n%10;
		sodao=sodao*10+sodu;
		n/=10;
	}
	return sodao;
}
int kiemtra(long long n){
	int count=0;
	if(n==1){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		return 1;
	}
	else return 0;
	
}

int main(){
	//so dao cua 1 so co phai so nguyen to khong?
	int T;
	cin>>T;
	long long a[T];
	for(long long i=0;i<T;i++){
		cin>>a[i];
		a[i]=kiemtra(daonguoc(a[i]));
	}
	for(long long i=0;i<T;i++){
		if(a[i]==0){
			cout<<"No"<<"\n";
		}
		else{
			cout<<"Yes"<<"\n";
		}
	}
	
	return 0;
}