#include<bits/stdc++.h>
using namespace std;
void xuatHienNhieuNhat(int a[],int n){
	map<int,int> count; // khoi tao map ten la: count
	for(int i=0;i<n;i++){
		count[a[i]]++;	 // dem so lan xh cua ptu.
	}
	int maxXH=0,phanTuMax=0;
	for(int i=0;i<n;i++){
		if(count[a[i]]>maxXH){
			maxXH=count[a[i]];
			phanTuMax=a[i];
		}
	}
	cout<<phanTuMax;	
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	xuatHienNhieuNhat(a,n); // truyen mang a, truyen so phan tu
	// khi(a), la da truyen het so phan tu cua mang, nhung chua so so ptu
	return 0;
}