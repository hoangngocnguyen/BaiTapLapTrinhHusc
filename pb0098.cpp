#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fn(int a, int b, int c, int n){
	while(n>0){
		return fn(a,b,c,n-1) + b*n + c;
	}
	return a;
}
int main(){
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	cout<< fn(a,b,c,n);
	return 0;
}