#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans[27]= {0};
    string s; 
    int n, k; 
    cin>>n>>k;
    cin>>s; n

    for(int i =0;i<k;i++){
    	for(int j=0;j<n;j++){
    		if(s[j] == i+65){
    			ans[i]++; 
    		}
    	}
    }
    // for(int i = 0;i<k;i++){
    // 		cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    int m = 100002;
    for(int i = 0;i<k;i++){
    	if(ans[i] == 0){
    		m = 0;
    		break;   
    	}
    	else {
    		m = min(m, ans[i]);
    	}
    }
    cout<<m*k<<endl;

}