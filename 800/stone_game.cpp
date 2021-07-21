#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	int t;
	
	cin>>t;
	
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector <int> s;
		
		for(int j = 0;j<n;j++){
			int value;
			cin>> value;
			s.push_back(value);
		}
		int min_index = 0;
		int max_index = 0;
		
		for(int j = 0;j<n;j++){
			int max_number=0;
			int min_number=0;
			if(s[j] > max_number){
				max_index = j;
				max_number = s[j];
				
				if(j == 0){
					min_index = j;
					min_number = s[j];
				}
			}
			else if(s[j] < min_number){
				min_index = j;
				min_number = s[j];
			}
		}
		int count = 0;
		//cout<<min_index<<endl;
		//cout<<max_index<<endl;
		
		if(min_index > max_index && min_index <= n/2 || min_index >= n/2){
			if(min_index<= n/2){
				count  = min_index ;
				//cout<<count<<endl;
			}
			else if(min_index> n/2){
				count  = n - max_index;
				//cout<<count<<endl;
			}
			
		}
		
		else if(max_index> min_index  && max_index<= n/2 || max_index>= n/2){
				if(max_index <= n/2){
					count = max_index;
					cout<<count<<endl;
				}
				else if(max_index>n/2){
					count = n-min_index;
					cout<<count<<endl;
				}
		}
		cout<<count<<endl;
	}
}

