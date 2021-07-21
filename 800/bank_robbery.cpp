#include<bits/stdc++.h>
using namespace std; 
int main(){
	int a,b,c; 
	cin>>a>>b>>c; 
	int n; 
	int ans=0;

	cin>>n; 
	for(int i = 0;i<n;i++){
		int x; 
		cin>>x; 
		if(x>b && x<c){
			ans++; 
		}
	}
	cout<<ans;
}