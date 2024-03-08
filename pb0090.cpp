#include<bits/stdc++.h>
using namespace std;

int doinhiphan(int n){
	int sodu=0,sonhiphan=0;
	while(n!=0){
		sodu=n%2;
		sonhiphan=sonhiphan*10+sodu;
		n/=2;
	}
	return sonhiphan;
}

bool kiemtra(int n){
	string so= to_string(n);
	for(int i=0;i<so.size();i++){
		if(so[i]!=so[so.size()-i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	if(n%2==0){
		cout<<"NO";
	}
	else{
		if(kiemtra(doinhiphan(n))){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		} 
	}
	return 0;
}