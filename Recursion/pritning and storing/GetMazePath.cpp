#include <bits/stdc++.h>
using namespace std;
vector<string> MazePaths(int sr,int sc,int dr,int dc){
    if(sr==dr && sc==dc){
        vector<string> p={""};
        return p;
    }
    vector<string>PathH;
    vector<string>PathV;
    if(sc!=dc)
       PathH= MazePaths(sr,sc+1,dr,dc);
    if(sr!=dr)
        PathV=MazePaths(sr+1,sc,dr,dc);
    vector<string>paths;
    for(auto p: PathH){
        paths.push_back('h'+p);
    }
     for(auto p: PathV){
        paths.push_back('v'+p);
    }
    return paths;
}
int main(){
        int n,m;
        cin>>n>>m;
        vector<string> path=MazePaths(1,1,n,m);
        for(auto p:path)cout<<p<<endl;
}