#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll A(int m, int n){
	if(m==0){
		return n+1;
	}
	if((m>0) and (n==0)){
		return A(m-1,1);
	}
	if((m>0) and (n>0)){
		return A(m-1,A(m,n-1));
	}
	return 0; // phai co doi voi ham tra ve.
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<< A(m,n);
	return 0;
}