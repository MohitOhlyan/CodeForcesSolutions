#include<bits/stdc++.h>

using namespace std; 

int main(){ 
	vector<int> v; 
	int t,n; 
	
	cin>>t; 
	for(int i = 0;i<t;i++){ 
		cin>>n;
		int sum = 0; 
		for(int j = 0;j<n;j++){ 
			int k; 
			cin>>k; 
			sum = sum+k;
			v.push_back(k); 
			
		}

		if(n<sum){ 
			cout<<sum - n<<endl;
		
		}
		else if(sum<n){ 
			cout<<"1"<<endl; 
		
		}
		else if(sum == n){ 
			cout<<"0"<<endl;
			
		}
		
		
		
	}
}
