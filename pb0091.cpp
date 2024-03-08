#include<bits/stdc++.h>
using namespace std;


int demso(int a){
	long long tong=0;
	int demchuso=0;
	int temp=a;
	int l=a;
	while(temp!=0){
		temp/=10;
		demchuso++;
	}
	while(a!=0){
		tong=tong + pow(a%10,demchuso);
		a/=10;
	}
	if(tong==l) return 1;
	else return 0;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		count+=demso(a[i]);
	}
	cout<<count;
	return 0;	
}