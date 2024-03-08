#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],count=0;
	int luckyNumber[]={4,7,16,28,44,47,49,64,74,77};
	int length= sizeof luckyNumber / sizeof(int);
	// trong c++ không có hàm lenght như java.
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=0;j<length;j++){
			if(a[i]==luckyNumber[j]){
				count++;
			}
		}
	}
	cout<<count++;

	return 0;
}
