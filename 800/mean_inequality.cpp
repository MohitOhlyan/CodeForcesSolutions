#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
	int t,n;
	long long int a[51],b[1001][51],c[51];
	
	cin>>t;
	
	for(int i=0;i<t;i++){
		cin>>n;
		c[i] = n;
		for(int j=0;j<2*n;j++){
			cin>>a[j];
		}
		sort(a,a+2*n);
		
		for(int j=0;j<2*n;j++){
			if((a[j] + a[j+2])/2 == a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
		for(int j=0;j<2*n;j++){
			b[i][j] = a[j];
		}
		}
		
		for(int i=0;i<t;i++){
			for(int j=0;j<2*c[i];j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	
		
	}
	



