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
    while(t--){
    	long long int x,n,m;
    	cin>>x>>n>>m;

    	while(m>0 || n>0){
    		if(x>0){
    			if(m>0 && n>0){
    				if(floor(x/2) + 10 < x ){
    					x = floor(x/2)+10;
    					n--;
    					// cout<<x<<endl;
    				}
    				else if(floor(x/2) + 10 >= x){
    					x = x -10;
    					m--;
    					// cout<<x<<endl;
    				}
    			}
    			else if(n<=0){
    				x = x -10;
    				m--;
    				// cout<<x<<endl;
    			}
    			else if(m<=0){
    				x = floor(x/2)+10;
    				n--;
    				// cout<<x<<endl;
    			}
    		}
    		else if(x<=0){
    			break;
    		}
    		
    	}
    	if(x<=0){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    }
    return 0;
}