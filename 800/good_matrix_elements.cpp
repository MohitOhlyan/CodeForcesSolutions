#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; 
	int a[101][101];
	cin>>n; 
	int sum = 0;

	for(int i = 0;i<n;i++){
	 	for(int j = 0;j<n;j++){
	 		cin>>a[i][j];
	 		if(i == j){
	 			sum = sum + a[i][j];
	 			// cout<<sum<<endl; 
	 		}
	 		if(i == n-j-1){
	 			sum = sum + a[i][j];
	 			// cout<<sum<<endl;

	 		}
	 		if(j == (n-1)/2){
	 			sum = sum + a[i][j];
	 			// cout<<sum<<endl;
	 		}
	 		if(i == (n-1)/2){
	 			sum = sum + a[i][j];
	 			// cout<<sum<<endl;
	 		}
	 	}
	}
	sum = sum - 3* a[(n-1)/2][(n-1)/2];
	cout<<sum;

}