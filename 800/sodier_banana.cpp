#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	int k,w,n;
	int i,ans;
	int sum =0;
	scanf("%d %d %d",&k,&n,&w);
	
	for(int i = 1;i<=w;i++){
		sum = sum + i*k;
	}
	ans = sum - n;
	if(ans<0){
		ans = 0;
	}
	printf("%d",ans);
}

