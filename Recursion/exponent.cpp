#include <bits/stdc++.h>
using namespace std;
int power(int n,int x){
    if(x==0) return 1;
    return n*power(n,x-1);
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    cout<<power(n,x);
    return 0;
}