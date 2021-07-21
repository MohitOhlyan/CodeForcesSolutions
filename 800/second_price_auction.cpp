#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n;
	vector<int> v;
	cin>>n; 
	int m = 0; 
	int p = 0;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp); 
	}
	for(int i = 0;i<n;i++){
		if(v[i] > p){
			p = v[i];
			m = i+1;
		}
	}
	sort(v.begin(),v.end());
	cout<<m<<" "<<v[n-2]<<endl;

}