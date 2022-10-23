#include <bits/stdc++.h>
using namespace std;
void PrintSP(int n,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    else if(n<0)return;
    PrintSP(n-1,ans+'1');
        
    
    PrintSP(n-2,ans+'2');

    
    PrintSP(n-3,ans+'3');

    
}
int main(){
    int n;
    cin>>n;
    string ans="";
    PrintSP(n,ans);
}