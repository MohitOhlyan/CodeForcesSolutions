#include<bits/stdc++.h>
using namespace std; 
int main(){
	int k; 
	cin>>k; 
	vector<int> v;
	for(int i = 0;i<k ;i++){
		int temp; cin>>temp; 
		v.push_back(temp);

	}
	sort(v.begin(), v.end());

	if(v[k-1] <= 25){
		cout<<"0"<<endl;
	}
	else if(v[k-1] > 25){
		cout<<v[k-1]- 25<<endl;
	}
}