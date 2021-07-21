#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	char s[MAX] , s1[MAX];
	int x,y=0,i;
	scanf("%s\n %s",s,s1);
	x = strlen(s);
	if(x==1){
		if(s[0] != s1[0]){
			y ++;
			
		}
		else if( s[0] == s1[0]){
			y =0;
		}
	}
	if(x>1){
	
	for(i=0;i<=x/2+1;i++){
		if(s[i] != s1[x-i-1]){
			y++;
			}
		}
	}
	
	if(y>0){
		printf("NO");
	}
	else if(y == 0){
		printf("YES");
	}

	
}


