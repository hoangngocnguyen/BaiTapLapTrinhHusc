#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n;
	double a[n],sum=0;
	cin>>t;
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}
	
	sort(a,a+n);  // truy cap vi tri phan tu 0 den phan tu n
	
	for(int i=n-t;i<n;i++){
		sum+=a[i];
	}
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
