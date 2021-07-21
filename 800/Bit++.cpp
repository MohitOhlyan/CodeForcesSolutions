#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define SIZE 152
int main(){
	int x=0,t;
	int i,j;
	
	int value=0;
	char s[SIZE];
	char m1[] = "++X";
	char m2[] = "--X";
	char m3[] = "X++";
	char m4[] = "X--";
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		scanf("%s",s);
	
		if(strcmp(s,m1) == value){
			x++;
			}
		else if(strcmp(s,m2) == value){
			x--;
			}
		else if(strcmp(s,m3) == value){
			x++;
			}
		else if(strcmp(s,m4) == value){
			x--;
			}
		}
	
	
	printf("%d",x);
}

