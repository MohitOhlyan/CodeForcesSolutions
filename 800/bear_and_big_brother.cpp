#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	int a,b;
	int ans = 0;
	
	scanf("%d %d",&a,&b);
	
	while(a<=b){
		a = a*3;
		b = b*2;
		ans++;
	}
	printf("%d",ans);
}

