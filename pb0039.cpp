#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	if(((4*m-n)%2==1) or ((n-2*m)/2==1) ){
		cout<<"-1";
	}
	else{
	    if( (((4*m-n)/2)<=0) or (((n-2*m)/2)<=0)){
	        cout<<"-1";
	    }
	    else{
	        cout<<"Ga = "<<(4*m-n)/2<<endl;
    	    cout<<"Cho = "<<(n-2*m)/2<<endl;
	    }
	}
	
	
	return 0;
	
}