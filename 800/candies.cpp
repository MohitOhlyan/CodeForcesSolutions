#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n,m; 
	int x;
	cin>>n>>m; 
	int mod, div; 
	int a[105]; 
	div = n/m; 
	mod = n%m; 
	for(int i =1 ;i<= m; i++){
		a[i] = div;

		if(mod>0){
			a[i] = div +1;
			mod--;
		}

	}
	 for(int i = 1;i<=m;i++){
	 	cout<<a[i]<<" ";
	 }
	

}