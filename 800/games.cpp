#include<stdio.h>
int main(){
	int n;
	
	int h,g;
	int ans=0;
	int a[101][101];
	int i,j;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n-1;i++){
		for(j=i;j<n-1;j++){
			
			if(a[i][0] == a[j+1][1]){
				ans++;
			}
	}
		
	}
	for(i=0;i<n-1;i++){
		for(j=i;j<n-1;j++){
			
			if(a[i][1] == a[j+1][0]){
				ans++;
				
			}
	}
		
	}
	
	printf("%d",ans);
}
