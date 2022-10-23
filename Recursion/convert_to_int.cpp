#include <bits/stdc++.h>
using namespace std;
void cnvrt_to_int(string s,int n,int ans,int i){
   if(i==n){
    cout<<ans;
    return;
    }
    ans+=((s[i]-'0')*pow(10,n-i-1));
    cnvrt_to_int(s,n,ans,i+1);
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int ans=0;
    cnvrt_to_int(s,n,ans,0);
    
}