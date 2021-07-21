#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

#define MAX 1000
int main(){
		char s[MAX];
		int x,upper=0,lower=0;
		scanf("%s",s);
		
		for(int i = 0;i<strlen(s);i++){
			x = s[i];
				if(x>96 && x<123){
					lower++;
				}
				else if(x>64 && x<91){
					upper++;
					
				}
			
		}
		
		if(lower>=upper){
			for(int i = 0;i<strlen(s);i++){
					x  = s[i];
					
					if(x>64 && x<91){
						x = x + 32;
					
						s[i] = x;
					}
			}
		}
		else if(upper>lower){
			for(int i = 0;i<strlen(s);i++){
					x  = s[i];
					
					if(x>96 && x<123){
						x = x - 32;
						s[i] = x;
					}
			}
			
		}
		printf("%s",s);
}

