#include <bits/stdc++.h>
using namespace std;
void PrintMPWJump(int sr,int sc,int dr,int dc,string path){
    if(sr==dr && dc==sc){
        cout<<path<<endl;
        return ;
    }
    for(int i=1;i<=dc-sc;i++){
        PrintMPWJump(sr,sc+i,dr,dc,path+'h'+to_string(i));
    }
     for(int i=1;i<=dr-sr;i++){
         PrintMPWJump(sr+i,sc,dr,dc,path+'v'+to_string(i));
         
    }
    for(int i=1;i<=dc-sc && i<=dr-sr;i++){
        PrintMPWJump(sr+i,sc+i,dr,dc,path+'d'+to_string(i));
 
    }
}
int main(){
    int n,m;
        cin>>n>>m;
        PrintMPWJump(1,1,n,m,"");
        
        return 0;
}