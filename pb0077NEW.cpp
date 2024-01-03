#include<bits/stdc++.h>
using namespace std;
void Lucas(long long a[], int n){
	a[0]=2;
	a[1]=1;
	for(int i=2;i<n+1;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<n+1;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	long long a[n+1];
	Lucas(a,n);
	return 0;
}
