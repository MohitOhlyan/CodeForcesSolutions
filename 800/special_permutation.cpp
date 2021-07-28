/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    for(int i = 0;i<t;i++){
    	int n; 
    	cin>>n;
    	vector<int> v(n); 
    	for(int i = 0;i<n;i++){
    		v[i] = i+1;
    	}
    	if(n%2 == 0){
    		for(int i = 0;i<n/2;i++){
    			swap(v[i], v[n-i-1]);
    	}
    	}
    	else if(n%2 == 1){
    		for(int i = 0;i<n/2;i++){
    			swap(v[i], v[n-i-1]);
    		}
    		swap(v[n/2], v[n/2 -1]);
    	}
    	
    	for(int i = 0;i<n;i++){
    		cout<<v[i]<<" "; 
    	}
    	cout<<endl;
    }
 	return 0;
}