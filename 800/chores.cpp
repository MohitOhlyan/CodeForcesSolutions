#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n,a,b; 
	long long int v[2002];
	cin>>n>>a>>b; 
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	sort(v, v+n);

	cout<<endl;
	if(v[b] == v[b-1]){
		cout<<"0";
	}
	else if(v[b] != v[b-1]){
		cout<<v[b] - v[b-1];
	}
	cout<<endl;
}