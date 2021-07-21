#include<stdio.h>
#include<math.h>

int main(){
	int t;
	int i,j,count=0;
	int ans[10004];
	long long int a[10004];
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		scanf("%lld",&a[i]);
		if(a[i] == 1){
			ans[i] = 0;
		}
		else if(a[i] == 2 ){
			ans[i] = 1;
		}
		else if( a[i] >2 ){
			for(j=1;j<20;j++){
				long long int z = pow(4,j);
				if(a[i] == z ){
					count++;
					
				}
			}
			
			if(count>0){
				ans[i] = 1;
			}
			else if(count ==0){
				ans[i] =0;
			}
		}
		count =0;
	}
	
	for(i=0;i<t;i++){
		if(ans[i] == 0){
			printf("NO\n");
		}
		else if(ans[i] == 1){
			printf("YES\n");
		}
	}
}
