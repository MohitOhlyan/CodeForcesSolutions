#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n;
	vector<int> v,u;
	int ans[101]= {0};
	cin>>n; 
	for(int i = 0;i<n;i++){
		int r; 
		cin>>r;
		u.clear();
		if(i == 0){
			for(int j = 0;j<r;j++){
				int temp; 
				cin>>temp; 
				v.push_back(temp);
			}
		}
		else if(i>0){
			for(int j =0;j<r;j++){
				int temp;
				cin>>temp;
				u.push_back(temp);
			}
		}
		int s1 = v.size();
		int s2 = u.size();
		
		if(s2 != 0){
			for(int j = 0;j<s1;j++){
				for(int k = 0;k<s2;k++){
					if(v[j] ==  u[k]){
						ans[j] = ans[j] +1;
						break;
					}
				}
			}
		}
	}
	vector<int> fans;
	int t = sizeof(ans)/sizeof(ans[0]);
	for(int i = 0;i<t;i++){
		if(ans[i] == n-1){
			fans.push_back(v[i]);
		}
		// cout<<ans[i]<<" ";
	}
	int z = fans.size();
	for(int i = 0;i<z;i++){
		cout<<fans[i]<<" ";
	}
}