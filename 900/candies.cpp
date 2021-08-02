/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 2; i < 30; ++i) {
			int value = (1 << i) - 1;
			if (n % value == 0) {
				cout << n / value << endl;
				break;
			}
		}
	}
    return 0;
}