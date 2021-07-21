#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	
	int n;
	
	for(int i = 0;i<t;i++){
		cin>>n;
		int q=0;
		int a[5];
		for(int j = 1;j<=4;j++){
			int x = pow(10,j);
			if(n%x !=0){
				int p = n%(x);
				
					a[j] = p-q;
					q = p;
			
			}
		}
		for(int j = 1;j<=4;j++){
			if(a[j]!=0 && a[j] < 10000){
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
			cout<<endl;
			q = 0;
	}
	
	
}
