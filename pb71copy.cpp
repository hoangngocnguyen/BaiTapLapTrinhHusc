#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,x,y;
	cin>>n;
	int a[n];
	cin>>x>>y;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	for(int i=n-y;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}