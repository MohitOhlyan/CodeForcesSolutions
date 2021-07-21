#include<iostream>

using namespace std;

int main(){
	unsigned long long int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	unsigned long long int x,y,z,p,q,r;
	
	p = max(a,b);
	q = max(p,c);
	r = max(q,d);
	
	if(r == a){
	x = r-b ;
	y = r- c;
	z = r- d;
	}
	else if(r == b){
	x = r- a;
	y = r- c;
	z = r-d ;
	}
	else if(r == c){
	x = r-a ;
	y = r-b ;
	z = r-d;
	}
	else if(r == d){
	x = r-a ;
	y = r- c;
	z = r- b;
	}

	
	
	cout<<x<<" "<<y<<" "<<z;
	
	
	

}
