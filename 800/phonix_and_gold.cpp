#include<stdio.h>
int main(){
	int t;
	int n, x;
	int i,j,ans[1000];
	int a[1002][102];
	int sum =0,nos[1002];
	int hold;
	scanf("%d",&t);
	for(int i= 0;i<t;i++){
		scanf("%d %d",&n,&x);
		nos[i] = n;
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
		
		for(j=0;j<n;j++){
			if(sum + a[i][j] !=x){
				sum= sum + a[i][j];
			}
			
			else if(sum + a[i][j] == x){
				if(j<n-1){
				hold = a[i][j+1];
				a[i][j+1] = a[i][j];
				a[i][j] = hold;
				sum = sum + a[i][j];
				}
				else if(j==n-1){
					sum = sum + a[i][j];
				}
				
			}
		}
		
		if(sum == x){
			ans[i] = 0;
		}
		else if( sum != x){
			ans[i] =1;
		}
		sum =0;
	}
	for(i=0;i<t;i++){
		if(ans[i] == 0){
			printf("NO\n");
		}
		else if(ans[i] == 1){
			printf("YES\n");
			for(j=0;j<nos[i];j++){
				printf("%d ",a[i][j]);
			}
			puts("");
		}
	}
}
