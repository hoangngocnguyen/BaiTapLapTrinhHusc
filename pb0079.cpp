#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
	int n,m,a;
	string hienthi="";
	cin>>m>>n;
	for(int i=0;i<m;i++){
		ll tong=0;
		for(int j=0;j<n;j++){
			cin>>a;
			tong+=a;
		}
		hienthi+=to_string(tong)+" ";
	}
	cout<<hienthi;
	return 0;    
}
	