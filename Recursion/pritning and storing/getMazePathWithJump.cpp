#include <bits/stdc++.h>
using namespace std;
vector<string>MazePathsWithJump(int sr,int sc,int dr,int dc){
    if(sr==dr && sc==dc){
        vector<string>p={""};
        return p;
    }
    vector<string> Path;
    
    
    for(int i=1;i<=dc-sc;i++){
       vector<string>path= MazePathsWithJump(sr,sc+i,dr,dc);
       
       for(auto p:path)Path.push_back('h'+to_string(i)+p);
    }
    for(int i=1;i<=dr-sr;i++){
       vector<string>path= MazePathsWithJump(sr+i,sc,dr,dc);
       
       for(auto p:path)Path.push_back('v'+to_string(i)+p);
    }
    for(int i=1;i<=dc-sc && i<=dr-sr;i++){
       vector<string>path= MazePathsWithJump(sr+i,sc+i,dr,dc);
       
       for(auto p:path)Path.push_back('d'+to_string(i)+p);
    }

   
    

    return Path;

    
}
int main(){
        int n,m;
        cin>>n>>m;
        vector<string> path=MazePathsWithJump(1,1,n,m);
        for(auto p:path)cout<<p<<endl;
        return 0;
}