#include<bits/stdc++.h>
using namespace std;
// test 9/10.
int main(){
	int n;
	cin>>n;
	long long a=2;
	long long b=1;
	cout<<2<<" "<<1<<" ";
	for(int i=2;i<n+1;i++){
		long long temp=b;
		b+=a;
		a=temp;
		cout<<b<<" ";
	}
	
	return 0;
}
