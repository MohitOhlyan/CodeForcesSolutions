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
    	int n,a,b,c,d;
    	cin>>n>>a>>b>>c>>d;
    	int L = n * (a - b), R = n * (a + b);
		if (R < c - d || c + d < L){
		    cout << "No\n";
		}
		else{
		    cout << "Yes\n";
		}
    }
    return 0;
}