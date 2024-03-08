#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],soam=0,soduong=0,sochan=0,sole=0;
	                  
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0){
			soam++;
		}
		if(a[i]>0){
			soduong++;
		}
		if(a[i]%2==0){
			sochan++;
		}
		else{
			sole++;
		}
	}
	cout<<soam<<endl;
	cout<<soduong<<endl;
	cout<<sochan<<endl;
	cout<<sole;
	return 0;
}