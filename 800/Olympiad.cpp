#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin>>n; 
    vector<int> v;
    for(int i = 0;i<n;i++){
    	int temp; 
    	cin>>temp; 
    	v.push_back(temp);

    }

    for(unsigned int i = 0;i<v.size();i++){
    	for(unsigned int j = v.size();j>i;j--){
    		if(v[i] == v[j]){
    			v[j] = 0;
    			
    		}
		}
	
	}	
	int count = 0;
	for(unsigned int i = 0;i<v.size();i++){
		if(v[i] != 0){
			count++;
		}
	}
	// for(unsigned int i = 0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	cout<<count;
}
