#include<bits/stdc++.h>
using namespace std;
int f(int m, int n){
	if((m==0) or (m==n)){
		return 1;
	}
	else if((m>0) and (m<n)){
		return f(m-1,n-1) + f(m,n-1);
	}
	return 0; 
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<< f(m,n);
	return 0;
}