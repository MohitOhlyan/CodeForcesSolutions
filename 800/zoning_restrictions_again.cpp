#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n,h,m;
	cin>>n>>h>>m; 
	int sum = 0;
	int a[51];
	for(int i = 1;i<=n;i++){
		a[i] = h;
	}
	// for(int i = 1;i<=n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;

	for(int i = 1;i<= m;i++){
		int l,r,x; 
		cin>>l>>r>>x; 
		for(int j = l;j<=r;j++){
			a[j] = min(x, a[j]);
		}
	}

	// for(int i = 1;i<=n;i++){
		// cout<<a[i]<<" ";
	// }
	for(int i = 1;i<=n;i++){
		sum = sum + a[i]*a[i];
	}
	cout<<sum<<endl;
}