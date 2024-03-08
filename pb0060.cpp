#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	if(n%2==1){
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		// map<key, value>  
		map<int,int> cnt;  // cnt= count
		for(int i=0;i<n;i++){
			cnt[a[i]]++;
		} // dem so lan xuat hien. cnt[gia tri]--> giatri:solan
		for(int i=0;i<n;i++){
			if(cnt[a[i]]%2==1){
				cout<<a[i];
			}
		}
	}
	return 0;	
}