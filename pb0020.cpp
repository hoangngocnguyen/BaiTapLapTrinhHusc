#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	//cout<<fixed<<setprecision(9); // chi hien thi, khong thay doi gia tri cua bien
//	if(fabs(a-b) <= pow(10,-9)){
//		a=b;
//	}
//	if(fabs(c-b) <= pow(10,-9)){
//		c=b;
//	}
//	
//	if((a+b>c) and (b+c>a) and (a+c>b)) {
//		if((a==b) or (a==c) or (b==c)){
//			if ((a==b) and (b==c)){
//				cout<<"Tam giac deu";
//			}
//			else {
//				cout<<"Tam giac can";  // bai toan so thuc dung bao gio sai so sanh bang
//			}
//		}
//		else {
//			cout<<"Tam giac thuong";
//		}	
//	}
		double e = pow(10,-9);
	if( (fabs(a+b-c) > e) and (fabs(b+c-a) > e) and (fabs(a+c-b) > e) ) {
		if((fabs(a-b) < e) or (fabs(a-c) < e) or (fabs(b-c) < e)){
			if ((fabs(a-b) < e) and (fabs(b-c) < e)){
				cout<<"Tam giac deu";
			}
			else {
				cout<<"Tam giac can";
			}
		}
		else {
			cout<<"Tam giac thuong";
		}	
	}
	return 0;
}
