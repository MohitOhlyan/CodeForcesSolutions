#include<stdio.h>
int main(){
	int n;
	int pos_larg, pos_small,total;
	int i;
	int largest = 0;
	int smallest ;
	int a[101];
	int hold;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	
	for(i = 0;i<n;i++){
		if(a[i]>largest){
			largest = a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i] == largest){
			pos_larg = i;
			break;
		}
	}
	
	
	total = pos_larg; 
	
	for(i=pos_larg;i>0;i--){
		if(a[i] >a[i-1]){
			hold= a[i-1];
			a[i-1] = a[i];
			a[i] = hold;
		}
	}

	
	
	smallest = a[0];
	
	
	for(i = 1;i<n;i++){
		if(a[i]<smallest){
			smallest = a[i];
		}
	}
	
	for(i=0;i<n;i++){
		if(a[i] == smallest){
			pos_small = i;
		}
	}

	
	total = total + n - pos_small-1;
	printf("%d",total);                                                                                 
}

