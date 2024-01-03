#include<bits/stdc++.h>
using namespace std;

vector<int> TraiSangPhai(int a[],int n, int k){
	
	vector<int> arr1;
	for(int i=n-k;i<n;i++){
		arr1.push_back(a[i]);  // day k phan tu cuoi
	}
	for(int i=0;i<n-k;i++){
		arr1.push_back(a[i]);  // day cac phan tu dau vo sau
	}
	return arr1;	
}

vector<int> PhaiSangTrai(int b[],int n, int k){  
	vector<int> arr2;  // day mang vao vector
	for(int i=k;i<n;i++){
		arr2.push_back(b[i]);  // day ptu tu k den cuoi mang vao
	}   
	for(int i=0;i<k;i++){
		arr2.push_back(b[i]);  // day k phan tu dau vo
	}
	return arr2;
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n], b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	vector<int> arr1=TraiSangPhai(a,n,k);
	vector<int> arr2=PhaiSangTrai(b,n,k);
//	for(auto x:arr1){
//		cout<<x<<" ";
//	}
//	cout<<endl;
//	for(auto x:arr2){
//		cout<<x<<" ";
//	}
//	cout<<endl;
	for(int i=0;i<n;i++){
		cout<< arr1[i] + arr2[i]<<" ";
	}
	return 0;
}