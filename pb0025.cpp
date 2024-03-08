#include<bits/stdc++.h>
using namespace std;
int main(){
	// giao nhau
	int L1,R1,L2,R2;
	cin>>L1>>R1>>L2>>R2;
	if((R1<L2) or (L1>R2)){
		cout<<"-1";
	}
	else {
		if((L1<L2) and ((R1>=L2) and (R1<=R2))){
		cout<<L2<<" "<<R1;
		}
		if((R1>R2) and ((L1>=L2) and (L1<=R2))){
		cout<<L1<<" "<<R2;
		}
		if((L1>=L2) and (R1<=R2)){
		cout<<L1<<" "<<R1;
		}
		if((L2>=L1) and (R2<=R1)){
		cout<<L2<<" "<<R2;
		}
	}
	return 0;
}
