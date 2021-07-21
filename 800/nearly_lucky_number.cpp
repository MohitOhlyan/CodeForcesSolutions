#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define MAX 100

int main(){
	char s[MAX];
	int x,y,z,i;
	scanf("%s",s);
	
	x = strlen(s);
	
	for(i=0;i<x;i++){
		y = s[i]-'0';
		
		if(y == 4 || y==7){
			z++;
		}
		}
	
	if(z == 4 || z ==7){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	
}

