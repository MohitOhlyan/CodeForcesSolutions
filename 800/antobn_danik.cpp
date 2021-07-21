#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 100002
int main(){
	char s[MAX];
	int a=0,d=0;
	int i,n;
	scanf("%d",&n);
	scanf("%s",s);
		
		for(i=0;i<n;i++){
			if(s[i] == 'A'){
				a++;
			}
			if(s[i] == 'D'){
				d++;
			}
		}
		
		if(a>d){
			printf("Anton");
		}
		if(d>a){
			printf("Danik");
		}
		if(a==d){
			printf("Friendship");
		}
}

