#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(abs(a-1)<abs(abs(b-c)+abs(c-1))) cout<<1<<"\n";
        else if(abs(abs(b-c)+abs(c-1))< abs(a-1)) cout<<2<<"\n";
        else cout<< 3<<"\n";
    }
}