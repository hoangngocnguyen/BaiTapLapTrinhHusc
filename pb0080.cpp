#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int kiemtra(int a[], int n,int solan,int demle){
	for(int i=0;i<n;i++){
			if(a[i]%2==1){
				cout<<solan;
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
	}
	demle=kiemtra(a,n,solan,demle);
	while(demle==0){
		for(int i=0;i<n;i++){
			a[i]/=2;
		}
		solan++;
		demle=kiemtra(a,n,solan,demle);
			
	}	
		
	return 0;    
}
	