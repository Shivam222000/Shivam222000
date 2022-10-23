#include <bits/stdc++.h>
using namespace std;
void binary_search(int arr[],int x,int n,int i){
    if(arr[(n-i)/2+i]==x){
        cout<<(n-i)/2+i;
        return;
    }
    else if(arr[n/2+i]<x){
        binary_search(arr,x,n,n/2+i);
    }
    else {
        binary_search(arr,x,n/2,i);
    }

}
int main(){
    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int x = 110;
    int n=sizeof(arr)/sizeof(arr[0]);
    binary_search(arr,x,n,0);
}