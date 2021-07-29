/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k;
    cin>>n>>k;

    long long int odd;

    if(n%2 == 0){
    	odd = n/2;
    	if(k<=odd){
    		cout<< (1 + (k-1)*2)<<endl;
    	}
    	else{
    		k = k -odd;
    		cout<< (2 + (k-1)*2)<<endl;
    	}
    }
    else{
    	odd = n/2 +1;
    	if(k<=odd){
    		cout<< (1 + (k-1)*2)<<endl;
    	}
    	else{
    		k = k-odd;
    		cout<< (2 + (k-1)*2)<<endl;
    	}
    }

    return 0;
}