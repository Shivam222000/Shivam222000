#include <bits/stdc++.h>
using namespace std;
bool sort_chk(int arr[],int i,int n,int &flag){
    if(i==n) return flag;
    sort_chk(arr,i+1,n,flag);
    if(arr[i]>=arr[i-1])return flag;
    else {
        flag=0;
        return flag;
    }
}
int main(){
    int arr[]={10,21,45,89,89,90};
    int flag=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sort_chk(arr,0,n,flag);
    return 0;
}