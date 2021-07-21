#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	long long int t;
	int a[MAX];
	int i;
	int p;
	
	scanf("%lld",&t);
	
	for(i=1;i<=t;i++){
		scanf("%d",&p);
		
		a[p] = i;
	}
	for(i=1;i<=t;i++){
		printf("%d ",a[i]);
	}
}

