#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,count=0;
	cin>>n;
	long long tong=0;
	for(int i=0; i<n;i++){
		cin>>a;	
		tong+=a;
		count++;
	}
	double tbc= (double)tong/count;
	cout<<fixed<<setprecision(2)<<tbc;
	return 0;
}