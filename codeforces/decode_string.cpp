#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";

        for(int i=0;i<n;i++){
            if((s[i]=='1' || s[i]=='2') && i<n-2 && s[i+2]=='0' && s[i+3]!='0'){
                int no = (s[i]-'0')*10 +(s[i+1]-'0');
                 no+=96;
                 ans.push_back(char(no));
                 i+=2;
            }
            else if((s[i]=='1' || s[i]=='2') && s[i]=='0'){
                 int no=s[i];
                no+=48;
                ans.push_back(char(no));
                i+=1;
            }
            
            else {
                int no=s[i];
                no+=48;
                ans.push_back(char(no));
            }

        }
        cout<<ans<<"\n";

    }
    return 0;
}