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
    vector<int> v(n), ans(n);
    int t_sum = 0;
    for(int i = 0;i<n;i++){
    	cin>>v[i]; 
    	t_sum = t_sum + v[i];

    }
    sort(v.begin(), v.end());
    int sum = 0, coin = 0;
    for(int i = n-1;i>=0;i--){
    	if(sum > t_sum)
    		break;

    	sum = sum + v[i]; 
    	t_sum = t_sum - v[i];
    	coin++;

    }

    cout<<coin<<endl;
    return 0;
}