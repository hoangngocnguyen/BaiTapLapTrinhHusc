#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,cnt=0;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]==0){
				cnt++;
			}
		}	
	}  // nhap mang a
	if(cnt>=(double)(m*n)/2){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}