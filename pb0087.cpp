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
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}	
	} //nhap mang b
	
	bool flag=true;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j]){
				flag=false;
				break;
			}
		}
	} 
	if(flag==false) cout<<"No";
	else cout<<"Yes";
	
	return 0;
}