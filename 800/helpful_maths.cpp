#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 102
int main(){
	char s[MAX];
	int m[MAX];
	int x,i,j,y,hold;
	scanf("%[^\n]s",s);
	
	x = strlen(s);
	for(i=0;i<x;i+=2){
	
		m[i] = s[i]-'0';
		
	}
	for(i=0;i<x;i+=2){
		for(j=0;j<x-1;j+=1){
			if(m[j] > m[j+2]){
				hold = m[j];
				m[j] = m[j+2];
				m[j+2] = hold;
				
			}
		}
	}
	
	
	for(i=0;i<=x;i+=2){
		y = m[i];
		
		 s[i] = y +'0';
		
		
	}
	for(i=1;i<x;i+=2){
		s[i] = '+';
	}

		printf("%s",s);
		// char to int is done via - '0';
		
}

