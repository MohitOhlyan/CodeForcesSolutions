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

    int ans = 0;
    for(int i = 1;i<=n;i++){
    	if(i<=n){
    		ans++; 
    		
    	}
    	if(i%m == 0){
    		n++; 
    	}
    	
    }
    cout<<ans<<endl;
    return 0;
}