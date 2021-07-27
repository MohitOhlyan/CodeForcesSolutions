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
    	int n, m; cin>>n>>m;
    	int ans = 0; 
    	
    	int temp = m*n; 
    	if(temp%2 == 1){
    		ans = temp/2 +1; 
    	}
    	else{
    		ans = temp/2; 
    	}
    	cout<<ans<<endl;
    }

    return 0;
}