#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fn(int n){
	if(n<=100){
		return fn(fn(n+11));
	}
	else{
		return n-10;
	}
	return 0; // phai co doi voi moi ham tra ve.
}
int main(){
	int n;
	cin>>n;
	cout<< fn(n);
	return 0;
}