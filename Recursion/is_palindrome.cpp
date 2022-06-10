#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(string a,int s,int e){
    if(s>=e)return true;
    if(a[s]!=a[e])return false;
   else return is_palindrome(a,s+1,e-1);
}
int main(){
   string a ="abba";
   cout<<is_palindrome(a,0,3);
    return 0;
}