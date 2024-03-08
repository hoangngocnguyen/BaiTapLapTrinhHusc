#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c,d,X;
	cin>>a>>b>>c>>d;
//	X= a*b*c*d; // se tran so
//	d= X%10;
//	c= (X/10)%10;  
// không can, in ra 2 so cuoi thi chi can % cho 100.
//	cout<<c<<d;

	X= (a%100)*(b%100)*(c%100)*(d%100);
	 // neu 2 so cuoi la 0 thi kq chi co 
	 //1 so 0 neu khong setfill
	cout<<setfill('0')<<setw(2)<<(X%100);
	return 0;
}
