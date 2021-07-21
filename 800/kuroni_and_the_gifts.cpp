#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	for(int i = 0;i<t;i++){
		int n ; 
		cin>>n; 
		vector<int> a,b; 
		for(int j = 0;j<n;j++){
			int temp;
			cin>>temp; 
			a.push_back(temp);
		}
		for(int j= 0;j<n;j++){
			int temp; cin>>temp; 
			b.push_back(temp);
		}

		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		// vector<int> ansx, ansy;
		// unsigned int temp = 0;
		// vector<int> temp1; 
		// temp1.push_back(0);

		// for(unsigned int k= 0;k<a.size();k++){
		// 	for(usngi)
		// 	for(unsigned int j=0;j<temp1.size();j++){
		// 		if(a[k] + b[a.size() - k - 1] != temp1[j]){
		// 			temp++; 
		// 			temp1.push_back(a[k] + b[a.size() -k -1]);

		// 		} 
		// 	}
		// 	if(temp = temp1.size()-1){
		// 		ansx.push_back(a[k]);
		// 		ansy.push_back(b[a.size() -k -1]);
		// 		a.erase(a.begin()+k);
		// 		b.erase(b.end() - k -1);
		// 	}
		// 	temp = 0;
			
			
		// }

		for(unsigned int j = 0;j<a.size();j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;

		for(unsigned int j = 0;j<b.size();j++){
			cout<<b[j]<<" ";
		
		}
		cout<<endl;
		
	}
}