#include <bits/stdc++.h>
using namespace std;
void recursive_bbl_srt(int arr[],int n){
    if(n==1) return;
    int count=0;
    for(int i=0;i<n-1;i++){
        
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            count++;
        }
        if(count==0)return;
    }
    recursive_bbl_srt( arr,n-1);
}
int main(){
    int arr[]={10,8,95,89,89,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    recursive_bbl_srt(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }

}