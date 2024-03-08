#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,tong=0;
	cin>>N;
	for(int i=1;i<=N/2;i++){
		if(N%i==0){
			tong+=i;
		}
	}
	if(tong>N){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
	
}