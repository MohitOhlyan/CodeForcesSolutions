#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	for(int i = 0;i<t;i++){
		vector<int> v;
		for(int j = 0;j<4;j++){
			int temp;
			cin>>temp; 
			v.push_back(temp);
		}
		sort(v.begin(), v.end());

		int l ,b; 

		b = v[0];

		if(v[0] == v[1]){
			l = v[2];
		}
		else if( v[0] != v[1] ){
			l = v[2];
		}

		cout<<l*b<<endl;
	}	
}