/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int n; 
     cin>>n; 
     int count = 0;
     vector<long int> v(n); 
     for(int i = 0;i<n;i++){
     	cin>>v[i]; 

     }
     int sum = 0;
     int ans = 0; 
     for(int i = 0;i<n;i++){
     	if(v[i] >= sum){ 
     		count++; 
     		sum = v[i]; 
     		// cout<<"I did"<<count<<endl;
     		ans = max(ans, count);
     	}
     	else if(v[i]<sum){
     		ans = max(ans, count);
     		sum = 0;
     		count = 0;
     		i = i-1;
     		// cout<<"No I did"<<count<<endl;
     	}
     	// cout<<ans<<endl;
     }
     cout<<ans<<endl;


    return 0;
}