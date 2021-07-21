#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	long long int t;
	int i;
	int p,q,count = 0;
	scanf("%lld",&t);
	
	for(i=0;i<t;i++){
		scanf("%d %d",&p,&q);
		
		if(q-p >= 2){
			count++;
			
			}
		}
		printf("%d",count);
		
	}
	


