#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n,m; 
	cin>>n>>m; 
	long long int even= 0, even1=0, odd =0,odd1=0;

	for(int i = 0;i<n;i++){
		long long int temp; cin>>temp;
		if(temp%2 == 0){
			even++;
		}
		else if(temp%2 == 1){
			odd++;
		}
	}
	for(int i = 0;i<m;i++){
		long long int temp; 
		cin>>temp;
		if(temp%2 == 0){
			even1++;
		}
		else if(temp%2 ==1){
			odd1++;
		}
	}
	
	long long int ans = min(even, odd1); 
	long long int ans1 = min(odd, even1);

	cout<<ans+ans1<<endl;


}