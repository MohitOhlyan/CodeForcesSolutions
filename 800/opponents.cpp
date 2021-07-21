#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n,d;
    cin>>n>>d; 

    string s ;
    int ans = 0,ansf = 0;
    for(int i = 0;i<d;i++){
        cin>>s;
        int count = 0;
        for(int j=0;j<n;j++){
            if(s[j] == 1){
                count++;
            }
        }
        if(count == n){
            ans = 0;
        }
        else{
            ans++;
        }
        ansf= max(ans,ansf);
    }
    
    cout<<ansf<<endl;
}