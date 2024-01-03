#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][n];
	bool flag=true;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			if((a[i][j]!=0) and (a[i][j]!=1)){
				flag=false;
			}
			else if((i==j) and (a[i][j]!=1)){
				flag=false;
			}
			else if((i!=j) and (a[i][j]!=0)){
				flag=false;
			}
			
		}
	}
	
	if(flag==false){
		cout<<"No";
	}
	else{
		cout<<"Yes";
	}
	return 0;
	
}