#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<string,int> map;
        int score[]={0,0,0};
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                string s;
                cin>>s;
                if(i==0 || i==1){
                map[s]+=i+1;
                score[i]+=3;}
                else{
                    map[s]+=i+2;
                    score[i]+=3;
                }
             
            }

        }

        for (auto x: map){
            if(map[x.first]==3){
                    score[0]-=2;
                    score[1]-=2;
                }
                else if(map[x.first]==6){
                    score[1]-=2;
                    score[2]-=2;

                }     
                else if(map[x.first]==5){
                    score[2]-=2;
                    score[0]-=2;
                    
                } 
                else if (map[x.first]==7) {
                    score[0]-=3;
                    score[1]-=3;
                    score[2]-=3;
                } 
        }
        for(int i=0;i<3;i++)cout<<score[i]<<" ";
        cout<<"\n";
        }
        return 0;
    }
