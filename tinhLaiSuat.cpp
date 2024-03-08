#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,m,p;
	int thang=0;
	cin>>n>>p>>m;
	while(n*pow((1+p/100),thang) < m ){
		thang++;
	}
	cout<<thang;
	return 0;
}