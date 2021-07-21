#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	long long int t;
	scanf("%lld",&t);
	int i;
	
	if( t == 1){
		printf("I hate it");
		
	}
	if(t>1){
		for(i=1;i<=t;i++){
			if(i == t){
				if(t%2==1){
					printf("I hate it");
					continue;
				}
				else if(t%2 ==0){
					printf("I love it");
					continue;
				}
			}
			if(i%2 == 1){
				printf("I hate that ");
			}
			if(i%2 == 0){
				printf("I love that ");
			}
		}
		
	}
}

