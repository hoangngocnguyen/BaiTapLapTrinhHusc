#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}   // tao 2 mang giong nhau.
	sort(b,b+n,greater<int>());
	map<int,int> cnt;
	cnt[b[0]]=1;
	for(int i=1;i<n;i++){
			
		if(b[i]!=b[i-1]){
			cnt[b[i]]= i+1;
		}
	}
	 for(int i=0;i<n;i++){
	 	
	 	cout<<cnt[a[i]]<<endl;
	 	
	 }  
	
	
	return 0;
}
