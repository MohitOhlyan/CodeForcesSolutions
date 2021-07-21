#include<iostream>

using namespace std;
#define MAX 10002
int main(){
	
	unsigned long long int t,x,y;
	unsigned long long int n,j;
	unsigned long long int a[MAX],b[MAX][MAX];
	
	scanf("%d",&t);
	
	unsigned long long int i;
	
	for(i=0;i<t;i++){
		scanf("%d",&n);
		
		x = n%2;
		y = n/2;
		if(x%2 == 1){
			a[i] = 0;
		}
		if(x%2 ==0){
			a[i] = 1;
			b[i][0] = 2;
			b[i][y] = 1;
			for(j=0;j<(n/2)-1;j++){
				b[i][j] = b[i][j]+2;
			}
			
			for(j=n/2+1;j<n;j++){
				b[i][j] = b[i][j] + 2;
			}
		}
	}
	
	for(i=0;i<t;i++){
		
		if(a[i] == 0){
			cout<<"NO"<<endl;
		}
		else if (a[i] == 1){
			cout<<"YES"<<endl;
			for(j=0;j<n;j++){
				cout<<b[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
