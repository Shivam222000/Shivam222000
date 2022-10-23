#include <bits/stdc++.h>
using namespace std;
void replace_pi(string s,int n,string ans,int i){
     if(i>=n){
        cout << ans;
        return;
     }
     if(s[i]=='p'&& s[i+1]=='i'){
        ans+="3.14";
        replace_pi(s,n,ans,i+2);
     }
     else{
        ans+=s[i];
        replace_pi(s,n,ans,i+1);
     }
    
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    string ans ="";
    replace_pi(s,n,ans,0);
    

    return 0;
}