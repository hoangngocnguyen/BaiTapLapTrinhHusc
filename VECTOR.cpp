#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a{1,2,3,4,5,6,7,8};
		a.erase(a.begin(),a.begin()+2);
		
	cout<<a[0];

	return 0;
}