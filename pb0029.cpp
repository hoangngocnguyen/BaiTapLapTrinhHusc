#include<bits/stdc++.h>
using namespace std;
int main(){
	double x,y;
	cin>>x>>y;
	if(x>0){
		if(y>0){
			cout<<"Q1";
		}
		if(y<0){
			cout<<"Q4";
		}
		if(y==0){
		cout<<"Eixo X";
		}
	}
	if(x<0){
		if(y>0){
		cout<<"Q2";	
	 	}
		if(y<0){
			cout<<"Q3";
		}
		if(y==0) cout<<"Eixo X";
	}
	if(x==0){
		if(y==0){
		cout<<"Origem";
		}
		if((y<0) or (y>0))
			cout<<"Eixo Y";
	}
	return 0;
}
