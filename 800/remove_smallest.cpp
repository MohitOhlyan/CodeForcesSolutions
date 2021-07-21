#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		
		int n;
		vector < int > s;
		
		for(int j= 0;j<n;j++){
			
			int value; 
			cin>>value;
			s.push_back(value);
			
		}
		
		for(int k= 0;k<n;k++){
			for(int m=k+1;m<n;m++){
				if(s[m] - s[k] <= 1){
					if(s[m]>s[k]){
						s.erase(s.begin()+k);
					}
					else if(s[m]<s[k]){
						s.erase(s.begin()+m);
					}
					
				}
			}
			
		}
		if(s.size() == 1){
			cout<<"YES"<<endl;
		}
		else if(s.size() >= 1){
			cout<<"NO"<<endl;
		}
	}
}
