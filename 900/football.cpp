/* 
	Author:- Mohit
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	string s;
   	cin>>s;
   	long unsigned int n = s.length();

   	int t1 =0, t2 = 0;

   	for(long unsigned int i =0 ;i<n;i++){
   		if(t1==7){
   			break;
   		}
   		else if(t2==7){
   			break;
   		}

   		else if(s[i] == 0){
   			t1++;
   			t2 = 0;
   		}
   		else if(s[i] == 1){
   			t2++;
   			t1 = 0;
   		}

   		
   	}
   	cout<<t1<<" "<<t2<<endl;
   	if (t1>=7 || t2>=7) 
   		cout<<"YES"<<endl;
   	else if(t1<7 && t2<7)
   		cout<<"NO"<<endl;
    return 0;
}