#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	cin>>a[0];
	int imin=a[0],imax=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>imin){
			if(a[i]>=imax){
				imax= i;
			}
		}
		else{
			imin=i;
		}
	}
	cout<<abs(imax-imin);
	return 0;
}
