#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fn(ll n){
	while(n>0){
		return n + fn(n-1);
	}
	return 0;
}
int main(){
	ll n; cin>>n;
	cout<< fn(n);
	return 0;
}