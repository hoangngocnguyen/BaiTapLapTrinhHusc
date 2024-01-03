#include<bits/stdc++.h>
using namespace std;
void ktSoHoanHao(int n){
	int sum=0;  // tong cac uoc
	string hienthi="";
	if(n<=1){
		cout<< "No";
	}
	else{
		for(int i=1;i<=n/2;i++){
			if(n%i==0){
				sum+=i;
				hienthi+= to_string(i) +" ";
			}
		}
		if(sum==n){
			cout<< "Yes"<<"\n";
			cout<<hienthi;
		}
		else{
			cout<< "No";
		}
	}
}
int main(){
	int n; cin>>n;
	ktSoHoanHao(n);
	
}