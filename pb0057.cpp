#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if((a[i]%2==0) or ((a[i]<0) and (a[i]%3==0))){
			count++;
		}
	}
	cout<<count;
	return 0;
}