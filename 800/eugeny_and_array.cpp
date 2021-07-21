#include<bits/stdc++.h>
using namespace std; 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned int n, m; 
	cin>>n>>m; 
	int n1=0,n2=0;
	int ans[200002];

	for(unsigned int i = 0;i<n;i++){
		int temp; 
		cin>>temp;
		if(temp == 1){
			n1++;
		}		
		else {
			n2++;
		}
	}
	for(unsigned int i = 0;i<m;i++){
		unsigned int l,r;
		cin>>l>>r;
		unsigned int t = r-l+1;

		if(t%2 ==0){
			if(n1 >= t/2 && n2 >= t/2){
				ans[i] = 1;
				}
			else{
				ans[i] = 0;
					}
			}
			else if(t%2 == 1){
				ans[i]=0;
			}

		}
	for(unsigned int i = 0;i<m;i++){
		printf("%d \n",ans[i]);
	}
}	