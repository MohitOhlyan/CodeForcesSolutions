#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n,m; 
	cin>>n>>m; 
	char a[52][52];
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin>>a[i][j];
		}
	}	

	int m1=52,m2= 52; 
	int n1=0,n2 = 0; 

	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			if(a[i][j] == 42){
				m1 = min(m1,i);
				m2 = min(m2,j);;
				n1 = max(n1,i);
				n2 = max(n2,j);
				// cout<<i<<" "<<j<<" "<<endl;
				// cout<<n2<<endl;

			}
			// cout<<n2<<endl;
		}
		
	}
	// cout<<m1<<" "<<n1<<" "<<n2<<endl;
	// cout<<a[5][5]<<endl;

	for(int i=m1;i<=n1;i++){
		for(int j = m2;j<=n2;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}