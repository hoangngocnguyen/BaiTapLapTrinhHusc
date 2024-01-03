#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if( (A[i]+A[j])%3==0 ){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
