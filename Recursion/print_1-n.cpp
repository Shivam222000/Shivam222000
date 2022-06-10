#include<bits/stdtr1c++.h>
using namespace std;
void print1_n(int n){
    if(n==0) return;
    print1_n(n-1);
    cout<<n;
}
int main(){
    print1_n(5);
    return 0;
}