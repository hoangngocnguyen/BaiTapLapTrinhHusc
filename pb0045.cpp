#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,tich=1;
	cin>>n;
	int tong=0;
	
	while(n!=0){
		tong= tong + (n%10);
		tich= tich*(n%10);
		n/=10;
	}
	cout<<fixed<<showpoint<<setprecision(3)<<(double)tich/tong;
	return 0;
	
}