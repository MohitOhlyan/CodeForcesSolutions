#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; 
	cin>>n;
	vector<int> v,a;
	
	for(int i = 0;i<n;i++){

		a.push_back(i+1); 
	}
	int j = 0;
		for(int i = 0;j<=n-1;i=i+j){
			if(i>=n){
				i = i-n;
			}

			v.push_back(a[i]);
			
			j++;

			
	}
	vector<int>::iterator it; 

	// for(long unsigned int i =0;i<v.size();i++){
	// 	for(long unsigned int j = i+1;j<v.size();j++){
	// 		if(v[i] == v[j]){
	// 		it = v.begin()+j;
	// 		v.erase(it);
	// 	}
	// 	}
		
	// }
	v.erase(v.begin());
	 for(long unsigned int i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}