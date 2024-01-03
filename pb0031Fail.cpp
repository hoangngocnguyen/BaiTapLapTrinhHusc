#include<bits/stdc++.h>
using namespace std;
int main(){
	int T,a1,a2,a3,a4,b,min=0;
//	cin>>T;
	//for(int i=0; i<T;i++){
		cin>>a1>>a2>>a3>>a4>>b;
		if(a1<a2){
			a1+=b;
		}
		else {
			a2+=b;
		}
		if(a3<a4){
			a3+=b;
		}
		else {
			a4+=b;
		}
		if ((a1==a2) and (a2==a3) and (a3==a4) and (a4==a1)){
			cout<<"Yes";
		}
//		else {
//			 cout<<"No";
//	  	}
//	}
	return 0;
}
