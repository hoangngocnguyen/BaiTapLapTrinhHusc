#include<bits/stdc++.h>
using namespace std;
int main(){
	char s;
	int n;
	cin>>s;
	cin>>n;
	int x[n];
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=x[i];j++){
			cout<<s;
		}
		cout<<endl;
	}
	return 0;
	
}