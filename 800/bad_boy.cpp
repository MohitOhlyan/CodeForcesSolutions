#include<bits/stdc++.h>
using namespace std; 

int main(){ 
	int t; 
	cin>>t;
	
	for(int k = 0;k<t;k++){ 
		long long int i,j,m,n; 
		cin>>i>>j>>m>>n; 
		long long int c1,c2, d1,d2;
		if(n<=i/2 && m<=j/2 && m!= 1 && n!= 1){
		 	c1 = i;
		 	c2 = j; 
		 	d1 = 1; 
		 	d2 = 1;
		}
		else if (n<=i/2 && m>j/2 && m!= 1 && n!= 1){ 
			c1= i;
			c2 = j; 
			d1 = 1;
			d2 = 1;
		}
		else if (n>i/2 && m>j/2 && m!= j && n!= i){ 
			c1= i;
			c2 = j; 
			d1 = 1;
			d2 = 1;
		}
		else if (n>i/2 && m<=j/2 && m!= 1 && n!= 1){ 
			c1= 1;
			c2 = j; 
			d1 = i;
			d2 = j;
		}
		cout<<c1<<c2<<d1<<d2<<endl; 
		
	}
}
