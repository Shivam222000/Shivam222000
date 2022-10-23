#include <bits/stdc++.h>
using namespace std;
void permutation(string s,int index,string ans){
    if(ans.length()==s.length()){
        cout<<ans<<endl;
        return ;
    }
    for(int i=index;i<s.length();i++){
        swap(s[index],s[i]);
        permutation(s,index+1,ans+s[index]);
    }
}
int main(){
    string s;
    cin>>s;
    permutation(s,0,"");
}