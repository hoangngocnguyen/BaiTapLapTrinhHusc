#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,sum=0;
	cin>>n;
	long long a=n;
	while(n<=0){
		sum = sum + n%10;
		n/=10;
	}
	if((a%sum)==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}