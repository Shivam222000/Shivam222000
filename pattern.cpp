#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"*"<<"\n";
    for(int i=1;i<=n;i++){
        cout<<"* ";
        for(int j=1;j<=i;j++){
            cout<<j<<" " ;
        }
        cout<<"* "<<"\n";
       
    }
    for(int i=n-1;i>=1;i--){
        cout<<"* ";
        for(int j=1;j<=i;j++){
            cout<<j<<" " ;
        }
        cout<<"* "<<"\n";
    }
    cout<<"*"<<"\n";
}