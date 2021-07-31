/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    vector<int> v;
    cin>>n>>m;
    for(int i = 0;i<m;i++){
    	int temp;
    	cin>>temp;
    	v.push_back(temp);

    }
    sort(v.begin(), v.end());

    int ans = 2000;
    // for(int i = 0;i<m;i++){
    // 	cout<<v[i]<<" ";
    // }
    // cout<<endl;
    
    	for(int i = 0;i<=m-n;i++){
    		ans = min(ans, v[i+n-1]- v[i]);
    		// cout<<i+n-1<<" "<<i<<endl;
    		// cout<<ans<<endl;
    	}
    
    
    cout<<ans;
    return 0;
}