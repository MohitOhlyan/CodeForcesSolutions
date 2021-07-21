#include<bits/stdc++.h>
using namespace std; 
int main(){
	char s[3][3];
	vector<int> x,y; 
	int count = 0;
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			cin>>s[i][j];
		}
	}

	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			if((s[i][j]) == 88){
				count++; 
				x.push_back(i);
				y.push_back(j);
			}
		}
	}
	// cout<<x.size()<<endl;
	// for(unsigned int i = 0;i<x.size(); i++){
	// 	cout<<x[i]<<" "<<y[i]<<endl;
	// }

	if(count == 9){
		cout<<"YES"<<endl;
	}
	else {
		unsigned int count1 = 0;
		if(x.size()%2 == 0){
			for(unsigned int i= 0;i<x.size()/2;i++){
				if(x[i]+ x[x.size()-i-1] == 2 && y[i]+y[x.size()-i-1] == 2){
					count1++; 
				}
			}
			// cout<<count1<<endl;
			if(count1 == x.size()/2){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else if(x.size()%2 == 1){
			for(unsigned int i= 0;i<x.size()/2+1;i++){
				if(x[i]+ x[x.size()-i-1] == 2 && y[i]+y[x.size()-i-1] == 2){
					count1++; 
				}
			}
			// cout<<count1<<endl;
			if(count1 == x.size()/2+1){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		
		
	}
}