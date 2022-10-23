#include <bits/stdc++.h>
using namespace std;
int min_jump(int arr[],int i,int n){
    if(i==n-1) return 0;
    if(arr[i]==0) return INT_MAX;
    int min=INT_MAX;
    for(int j=i+1;j<=i+arr[i] && j<=n-1;j++){
        int jumps=min_jump(arr,j,n);
        if(jumps != INT_MAX && jumps+1< INT16_MAX)min=jumps+1;
    }
    return min;
        
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<min_jump(arr,0,n);
}