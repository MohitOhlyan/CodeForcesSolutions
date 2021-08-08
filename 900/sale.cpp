/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i= 0;i<n;i++){
    	cin>>v[i];
    }
    int ans  = 0;
    sort(v.begin(),v.end());
    for(int i = 0;i<m;i++){
    	if(v[i] <=0){
    		ans = ans - v[i];
    	}
    		
    }
    cout<<ans;
    return 0;
}