#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n],b[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}	
	}  // nhap mang a
	
	for(int i=0;i<m;i++){
		int maxng=0;
		for(int j=0;j<n;j++){
			if(a[i][j]>=maxng){
				maxng=a[i][j];
			}
		}
		cout<<maxng<<" ";
	}    // max hang ngang
	cout<<endl;
	for(int i=0;i<n;i++){
		int maxdoc=0;
		for(int j=0;j<m;j++){
			if(a[j][i]>=maxdoc){
				maxdoc=a[j][i];
			}
		}
		cout<<maxdoc<<" ";
	}
	return 0;
}