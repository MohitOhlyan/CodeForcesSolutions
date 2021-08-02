/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    if(n>=0){
    	cout<<n<<endl;
    }
    else if(n<0 && n>(-10)){
    	cout<<0<<endl;
    }
    else if(n<=(-10)){
    	n  = (-1)*n;
    	// cout<<n<<endl;
    	long long int f = n%10;
    	long long int s = (n/10)%10;
    	// cout<<f<<" "<<s<<endl;
    	if(f>=s){
    		n = n - f;
    		n = n/10;
    		n = (-1)*n;
    		cout<<n<<endl;
    	}
    	else if(f<s){
    		n = n /10;
    		n = n-s;
    		n = n+f;
    		n = -1*n;
    		cout<<n<<endl;
    	}

    }

    return 0;
}