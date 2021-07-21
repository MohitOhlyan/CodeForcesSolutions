#include<stdio.h>
int main(){
	int n,k,i;
	int diff;
	scanf("%d %d",&n,&k);
	int count = 0;
	diff = 240 -k;
	
	for(i=1;i<=n;i++){
		if(5*i <= diff){
			count++;
			diff = diff - 5*i;
			
		}
	}
	printf("%d",count);
}
