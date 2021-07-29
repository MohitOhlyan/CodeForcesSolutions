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
    	long long int a,b;
    	cin>>a>>b;
    	int count =0;
    	while(a!=b){
    		if(a>b){
    			int temp = a-b;
    			if(temp%2 == 0){
    				a = a - temp;
    				count++;
    			}
    			else if(temp%2 ==1){
    				a = a +1;
    				count++;
    			}
    			
    		}
    		else if(b>a){
    			int temp = b-a;
    			if (temp % 2 == 1){
    				a = a+ temp;
    				count++;
    			}
    			else if(temp%2 == 0){
    				a = a+ temp -1;
    				count++;
    			}
    		}
    	}
    	cout<<count<<endl;
	    	
}
    return 0;
}