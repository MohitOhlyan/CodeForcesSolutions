#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n,k,x;
	cin>>n>>k>>x;
	vector<int> v; 
	for(int i = 0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}

	for(int i = 0;i<k;i++){
		v[n-i-1] = x;
		// cout<<v[n-i-1]<<endl;
	}
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum = sum + v[i];
	}
	cout<<sum;
}