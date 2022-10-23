#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string row1;
        string row2;
        cin>>row1;
        cin>>row2;
        int flag=1;
        for(int i=0;i<n;i++){
            if(row1[i]=='G'|| row1[i]=='B'){
                {
                if(row2[i]=='R'){
                cout<<"NO\n";
                flag=0;
                break;}
                }


            }
            else if(row1[i]=='R'){
                if(row2[i]!='R')
                {cout<<"NO\n";
                flag=0;
                break;
                }
            }
            
            }
             if(flag==1)cout<<"Yes\n";
            


        }
        return 0;
       
    }
