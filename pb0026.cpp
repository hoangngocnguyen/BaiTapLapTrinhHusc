#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h,m,s;
	cin>>n;
	cout<<setfill('0')<<setw(2);
	h= n/3600;
	m= (n%3600) /60;
	s= (n%3600) %60;
	cout<<setfill('0')<<setw(2)<<h
	<<":"<<setfill('0')<<setw(2)<<m
	<<":"<<setfill('0')<<setw(2)<<s;
	
	return 0;
}
