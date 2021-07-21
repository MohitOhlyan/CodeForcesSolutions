#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	char s[MAX];
	int x;
	scanf("%s",s);
	
	x = s[0];
	

	if(x>96 && x<123){
		x = x-32;
		
		s[0] = x;
		
		printf("%s",s);
	}
	else {
		printf("%s",s);
	}
}

