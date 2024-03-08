#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	string le="",chan="";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			chan+= to_string(a[i]) + " ";
		}
		else{
			le+= to_string(a[i]) + " ";
		}
	}
	cout<<chan+le;
	return 0;
}