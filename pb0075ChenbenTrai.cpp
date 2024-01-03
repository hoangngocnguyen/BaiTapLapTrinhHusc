#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	int a[n];
	cin>> x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// 3 th: x be hon so dau day, x be hon so giua,x lon nhat
	if(x<=a[0]){
		cout<<1;
	}
	else if(x>a[n-1]){
		cout<<n+1;    // chen vo sau n, la n+1
	}
	else{
		for(int i=1;i<n-1;i++){
			if((x>a[i]) and (x<=a[i+1])){
				cout<<(i+1+1);  //cong 1 vi: day chay tu1, va phan tu sau a[i]
				break;
			}
		}
	}
	return 0;    
}
	