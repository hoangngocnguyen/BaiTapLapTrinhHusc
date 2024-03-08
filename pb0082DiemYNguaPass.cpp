#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}	
	}  // nhap mang a
	
	// tao ra 2 map: min cac hang ngang va max cac cot
	map<int,int> minNgang;
	map<int,int> maxDoc;
	
	for(int i=0;i<m;i++){
		int min=a[i][0];
		for(int j=0;j<n;j++){
			if(a[i][j]<min){
				min=a[i][j];
			}
		}
		minNgang[i]=min;
	}    // tim min ngang
	for(int i=0;i<n;i++){
		int max=a[0][i];
		for(int j=0;j<m;j++){
			if(a[j][i]>max){
				max=a[j][i];
			}
		}
		maxDoc[i]=max;
	}     // tim max hang doc
	// thiet lap co de xem co phan tu khong;
	bool flag=false;
	string hienthi="";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if((a[i][j]==minNgang[i]) and (a[i][j]==maxDoc[j])){
				hienthi= hienthi+ "(" + to_string(i+1) + "," + to_string(j+1) +"); ";
				flag=true;
			}
		}
	}
	if(flag==false){
		cout<<"Khong co phan tu yen ngua";
	}
	else{
		cout<<"Cac phan tu yen ngua la:"<<"\n";
		cout<<hienthi;
	}
	return 0;
}



