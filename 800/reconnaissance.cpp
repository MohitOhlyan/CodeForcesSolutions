#include<bits/stdc++.h>
using namespace std; 
int main(){
	long long int n,d; 
	cin>>n>>d;
	int count = 0;
	vector<int> a;

	for(int i = 0;i<n;i++){
		long long int temp; 
		cin>>temp; 
		a.push_back(temp);
	}	
	sort(a.begin(),a.end());
	
	cout<<endl;\
	for(int i = 0;i<n;i++){
		for(int j = i;j<n-1;j++){
			if(a[j+1] - a[i]<= d){
			count++;
		}
		}
	}

	cout<<count*2<<endl;
}