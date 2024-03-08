#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	string sodao="",sobandau= to_string(n);
	
	while(n>0){
		sodao= sodao + to_string(n%10);
		n=n/10;
	}
	if(sodao.compare(sobandau)==0){
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}

	return 0;
}