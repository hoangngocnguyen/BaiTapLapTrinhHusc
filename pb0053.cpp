#include<bits/stdc++.h>
using namespace std;

void chenmang(int a[],int k,int index,int n){
	for(int i=n;i>index;i--){  // tang kt mang+1
		a[i]=a[i-1];   // tao cho trong de chen
	}
	n++;
	// tang kichthuoc mang
	a[index]=a[k+1];
	// vi kt mang tang nen chi so ban dau cung tang +1
	
	for(int i=k+1;i<n;i++){   
		a[i]=a[i+1];     // xoa phan tu da chen.
	}
	n--;  
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){ // tìm cách viết tắt
		cin>>a[i];
	}
	
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]<=a[j]){  // tao mot ham chen phan tu
				chenmang(a,i,j,n);
				// chèn xong thì out loop. xét ptu khác
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}