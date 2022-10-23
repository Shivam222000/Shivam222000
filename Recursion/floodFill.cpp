#include <bits/stdc++.h>
using namespace std;


void FloodFill(vector<vector<int>>arr,int sr,int sc,int dr,int dc,string path){
    if(sr==dr && sc==dc){
        cout<<path<<endl;
        return ;
    }
     if(sr>0 && arr[sr-1][sc]!=1){
        arr[sr-1][sc]=1;
        
        FloodFill(arr,sr-1,sc,dr,dc,path+"t");
        arr[sr-1][sc]=0;
    }
    
    if(sc>0 && arr[sr][sc-1]!=1){
        arr[sr][sc-1]=1;
    
        FloodFill(arr,sr,sc-1,dr,dc,path+"l");
        arr[sr][sc-1]=0;
    }
    
    if(sc<dc && arr[sr][sc+1]!=1){
        arr[sr][sc+1]=1;
        FloodFill(arr,sr,sc+1,dr,dc,path+"r");
        arr[sr][sc+1]=0;

    }
    
    if(sr<dr && arr[sr+1][sc]!=1){
        arr[sr+1][sc]=1;
        FloodFill(arr,sr+1,sc,dr,dc,path+"d");
        arr[sr+1][sc]=0;
    }
    
    return;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        vector<int>vec;
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            vec.push_back(k);
        }
        arr.push_back(vec);
    }
    arr[0][0]=1;
    FloodFill(arr,0,0,n-1,m-1,"");
    return 0;
}