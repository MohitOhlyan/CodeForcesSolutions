#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	long long int t,i;
	long long int count = 0;
	scanf("%lld",&t);
			if(t%2 == 0){
				count =	t/2*(t/2 +1) - (t/2)*(t/2);
			}
			else if(t%2 == 1){
				count =	(t/2)*(t/2 +1) - (t/2+1)*(t/2+1);
			}			
			
	printf("%lld",count);
}

