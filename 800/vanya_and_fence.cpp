#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	long long int n,h;
	int i,h1,width=0;
	
	scanf("%lld",&n);
	scanf("%lld",&h);
	for(i=0;i<n;i++){
		scanf("%d",&h1);
		if(h1<=h){
			width++;
			
		}
		else if(h1>h){
			width+=2;
			
		}
	}
	printf("%d",width);
	
}

