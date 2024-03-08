#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,count=0;
	cin>>n>>m>>k;
	if(n%k!=0){
		count= count + (n/k)+1;
	}
	else{
		count=count+ (n/k);
	}
	if(m%k!=0){
		count=count+ (m/k)+1;
	}
	else{
		count=count+  m/k;
	}
	cout<<count;
	return 0;
}
