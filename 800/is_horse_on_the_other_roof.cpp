#include<bits/stdc++.h>
using namespace std;

int main()

{
	long long int a[4];
	
	for(int i=0;i<4;i++){
		cin>>a[i];
		
	}
	int count = 0;
	for(int i = 0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[j]>=1){
				if(a[i] ==a[j]){
				count++;
				a[j] = -1;
			}
		}
			
		}
	}
	cout<<count<<endl;
}
