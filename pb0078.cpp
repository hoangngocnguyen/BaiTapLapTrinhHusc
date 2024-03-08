#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int kiemtra(int a[], int n,int demle){
	for(int i=0;i<n;i++){
			if(a[i]%2==1){
				demle++;			
			}
	}
	return demle;
}

int main(){
	int n,demle=0,solan=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==1){
			demle++;
		}
	}
	if(demle!=0){
		cout<<"0";
	}
	else{
		while(demle==0){
			for(int i=0;i<n;i++){
				a[i]/=2;
			}
			solan++;
			demle=kiemtra(a,n,demle);	
		}
		cout<<solan;
	}
	
	return 0;    
}