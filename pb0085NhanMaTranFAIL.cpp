#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<vector<int> > &a,int m,int n){
	//a.resize(m);
	for(int i=0;i<m;i++){
	//	a.at(i).resize(n);
		for(int j=0;j<n;j++){
			cin>>a.at(i).at(j);
		}
	}
}
int main(){
	int m,n,p;
	cin>>m>>n>>p;
	vector<vector<int> > a(m,vector<int> (n));
	vector<vector<int> > b(n,vector<int> (p));
	nhapmang(a,m,n);
	nhapmang(b,n,p);
	vector<vector<int> > c(b); // tao mang thu 3 de ghi lai gia tri nhan.
	 //duyet het hang ngang cua mang a.
	for(int i=0;i<m;i++){
		//duyet tung phan tu mot hang cua mang a = cac hang cua mang b
		for(int j=0;j<n;j++){
			//nhan vao tung phan tu 1 hang cua mang b
			for(int k=0;k<p;k++){
				//nhan gia tri ghi vao mang 3
				c.at(j).at(k) = (a.at(i).at(j)) * (b.at(j).at(k));
			}
		}
		// xong 1 hang cua mang a thi in ra gia tong
		
		for (int x=0;x<p;x++){     // duyet tung cot mang c
			long long tongDay=0;  // reset tongDay sau moi cot
			for(int y=0;y<n;y++){   // duyet tung hang mang c
				tongDay= tongDay + c.at(y).at(x);
			}
			// xong 1 cot thi in ra
			cout<<tongDay<<" ";
		}
		// xong 1 hang cua mang a thi xuong dong
		cout<<endl;
	}
//	for(int j=0;j<n;j++){
//		for(int k=0;k<p;k++){
//			cout<<c.at(j).at(k) <<" ";
//		}
//		cout<<"\n";
//	}   // test vi sao in ra kq sai
	return 0;
}