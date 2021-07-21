#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
	char s[MAX],s2[MAX];
	int i,j,count=0;
	int n,ans;
	scanf("%s",s);
	
	n = strlen(s);
	strcpy(s2,s);
	
	for(i=0;i<n;i++){
		for(j=i;j<=n;j++){
			if(s[i] == s[j+1]){
				s2[j] = '0';
			}
		}
	}
	for(i=0;i<n;i++){
		if(s2[i] == '0' ){
			count++;
		}
	}
	ans = n-count;
	
	if(ans%2 != 0){
		printf("IGNORE HIM!");
	}
	else{
		printf("CHAT WITH HER!");
	}
}

