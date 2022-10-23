#include <bits/stdc++.h>
using namespace std;
void PrintMazePaths(int sr,int sc,int dr,int dc,string path){
    if(sr==dr && sc==dc){
        cout<<path<<endl;
    }
    if(sr<dr)
    PrintMazePaths(sr+1,sc,dr,dc,path+'v');
    if(sc<dc)
    PrintMazePaths(sr,sc+1,dr,dc,path+'h');
}
int main(){
    int n,m;
    cin>>n>>m;
    PrintMazePaths(1,1,n,m,"");
   
}