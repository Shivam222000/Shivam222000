#include <bits/stdc++.h>
using namespace std;
void printSS(string ques,string ans){
    if(ques.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=ques[0];
    printSS(ques.substr(1),ans+"");
    printSS(ques.substr(1),ans+ch);
}
int main(){
    string que;
    cin>>que;
    string ans="";
    printSS(que,ans);
}