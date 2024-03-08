#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	double S=0;
	for(int i=1;i<=n;i++){
		S=S+ (double)1/i;
	}
	cout<<fixed<<setprecision(6)<<S;
	return 0;
	
}