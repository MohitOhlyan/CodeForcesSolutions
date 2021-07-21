#include<stdio.h>
int main(){
	int t,i;
	long long int n,ans[10004];
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		scanf("%lld",&n);
		if(n<2){
			ans[i] = 0;
			
		}
		else if(n>2 && n%2 ==0){
			ans[i] = n - (n/2 +1);
		}
		else if( n>2 && n%2 == 1){
			ans[i] = n - (n/2) -1;
		}
		
	}
	for(i=0;i<t;i++){
		printf("%lld\n",ans[i]);
	}
}
