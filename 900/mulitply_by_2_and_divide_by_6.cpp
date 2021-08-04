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
    	long long int n; 
    	cin>>n; 
    	
    	long long int c2=0,c3=0;
    	while (n % 2 == 0) {
			n /= 2;
			++c2;
		}
		while (n % 3 == 0) {
			n /= 3;
			++c3;
		}
		if (n == 1 && c2 <= c3) {
			cout << 2 * c3 - c2 << endl;
		} else {
			cout << -1 << endl;
		}
    	
    	// cout<<c3<<" "<<c2<<endl;
    }
 	return 0;
}