#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	while(n>=10){
		n/=10;
	}
		if(n%2==0){
			cout<<"even";
		}
		else{
			cout<<"odd";
		}
	return 0;
}