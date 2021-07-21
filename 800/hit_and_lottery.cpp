#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld",&n);
	long long int a,b,c,d,e,f,g,h,i;
	long long int ans=0;
	
	a = n/100;
	b = n%100;
	c = b/20;
	d = b%20;
	e = d/10;
	f= d%10;
	g = f/5;
	h = f%5;
	i = h/1;
	
	
	
	ans = a+ c+ e+ g+i;
	printf("%lld",ans);
}
