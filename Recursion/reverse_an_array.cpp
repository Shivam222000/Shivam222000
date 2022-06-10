#include <bits/stdc++.h>
using namespace std;
void reverse_arr(int arr[],int l,int r,int n){
    if(l>=n/2) return;
    reverse_arr(arr,l+1,r-1,n);
    swap(arr[l],arr[r]);
}
int main(){
    int arr[]={5,4,3,2,1};
    reverse_arr(arr,0,4,5);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}