#include<bits/stdc++.h>
using namespace std;

int *XoayTraiSangPhai(int a[],int n, int k){
	
	for(int i=0;i<n-k;i++){
		a[n+i]=a[i];  
	}
	
	for(int i=0;i<n;i++){
		a[i]=a[i+n-k+3];
	}
	
	return a;
	
}


int * XoayPhaiSangTrai(int b[],int n, int k){
	for(int i=0;i<k;i++){
		b[n+i]=b[i];  
	}   
	for(int i=0;i<n;i++){
		b[i]=b[i+k];
	}
	return b;
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n], b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int *p=XoayTraiSangPhai(a,n,k);
	int *p2=XoayPhaiSangTrai(b,n,k);
		
	for(auto x:a){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:b){
		cout<<x<<" ";
	}
	cout<<endl;	

	for(int i=0;i<n;i++){
		cout<<*(p+i) + *(p2+i)<<" ";
	}
	return 0;
}