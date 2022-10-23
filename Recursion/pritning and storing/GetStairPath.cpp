#include <bits/stdc++.h>
using namespace std;
vector<string>getPath(int n){
    if(n==0){
        vector<string>p={""};
        return p;
    }
    else if(n<0){
        vector<string>p;
        return p;
    }
    vector<string>path1=getPath(n-1);
    vector<string>path2=getPath(n-2);
    vector<string>path3=getPath(n-3);
    vector<string>paths;
    for(auto s:path1){
        paths.push_back('1'+s);
    }
    for(auto s:path2){
        paths.push_back('2'+s);
    }
    for(auto s:path3){
        paths.push_back('3'+s);
    }
    return paths;
    
    
}
int main(){
    int n;
    cin>>n;
    vector<string> paths=getPath(n);
    for(auto s:paths){
        cout<<s<<endl;
    }
}