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
	// 3 th: x be hon so dau day, x be hon so giua,x lon nhat hoac bang so cuoi
	if(x<a[0]){        // < : neu = thi chen o vi tri khac
		cout<<1;
	}
	else if(x>=a[n-1]){       //>= vi chen sau
		cout<<n+1;    // chen vo sau n, la n+1
	}
	else{
		for(int i=1;i<n-1;i++){
			if(x<a[i]){
				cout<<(i+1);  //lay vi tri cua a[i];
				break;
			}
		}
	}
	return 0;    
}
	