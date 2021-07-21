#include<bits/stdc++.h>
using namespace std; 
int main(){
	long long int n; 

	cin>>n; 

	long long int sum = (n*(n+1))/2;

	long long int  sum1 = 0;
	for(int i =0;i<n-1;i++){
		long long int temp; 
		cin>>temp; 
		sum1 = sum1+temp;
	}
	long long int result = sum - sum1;
	cout<<result;
}
