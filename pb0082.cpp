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
	
	//duyet tung hang
	for(int i=0;i<m;i++){
		int min=a[i][0];  // gan min la phan tu dau tien
		for(int j=1;j<n;j++){
			if(a[i][j]<min){
				min=a[i][j];	// tim phan tu min trong hang
			}
		}
		cout<<"Min: "<<min<<"\n";
		//duyet trong hang,xet dieukien
			
		for(int cot=0;cot<n;cot++){
			if(a[i][cot]==min){
				int jMin=cot;
				
				// duyet hang doc de tim max;
			   // max: hang dau, cot j
				cout<<"J la: "<<cot<<"\n";
				int max=a[0][jMin];
				for(int k=0;k<m;k++){
					if(a[k][jMin]>max){
						max==a[k][jMin];
						cout<<"MAX: "<<max<<"\n";
					}	
					
				}
					
				
				// neu a[i][j] bang max thi la yen ngua
				
				for(int x=0;x<m;x++){
					
					if(a[x][jMin]==max){
						
						cout<<"("<<x<<","<<jMin<<"); ";
					}
				}
			}
			
		}
		
		
	}
	return 0;
}



