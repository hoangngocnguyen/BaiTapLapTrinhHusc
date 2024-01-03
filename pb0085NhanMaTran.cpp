#include<bits/stdc++.h>
using namespace std;

void nhapmang(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];	
		}
	}
}
int main(){
	int m,n,p;
	cin>>m>>n>>p;
	int a[m][n];
	int b[n][p];
	nhapmang(a,m,n);
	nhapmang(b,n,p);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j];	
		}
	}
	
}