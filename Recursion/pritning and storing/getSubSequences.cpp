#include <bits/stdc++.h>
using namespace std;
vector<string> findSubSequences(string s){
    if(s.length()==0){
        vector<string>a;
        a.push_back("");
        return a;
    }
    char ch=s[0];
    vector<string> ans_till;
    vector<string> ans_from_ahead=findSubSequences(s.substr(1));
    for(int i=0;i<ans_from_ahead.size();i++){
        ans_till.push_back(ans_from_ahead[i]);
    }
    for(int i=0;i<ans_from_ahead.size();i++){
        ans_till.push_back(ch+ans_from_ahead[i]);
    }
    return ans_till;

}
int main(){
    string s;
    cin>>s;
    vector<string> ans=findSubSequences(s);
    for(auto it:ans)cout<<it<<" ";
    cout<<ans.size();
}