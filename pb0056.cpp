#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long sum=0;
	cin>>n;
	int a[n];
	cin>>a[0];
	int max=a[0];
	for (int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>max){			
			sum=sum+max;
			max= a[i];
		}
		else if(a[i]==max){
			max=a[i];
		}
		else{
			sum=sum+a[i];
		}
	}
	cout<<sum;
	return 0;
}