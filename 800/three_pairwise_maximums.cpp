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
    
    	vector<int> v(3);
    	for(int i= 0;i<3;i++){
    		cin>>v[i];
    	}
    	sort(v.begin(), v.end());
    	if(v[1]!= v[2]){
    		cout<<"NO"<<endl;
    	}
    	else {
    		cout<<"YES"<<endl<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
    	}

    }
      return 0;
}