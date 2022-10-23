#include <bits/stdc++.h>
using namespace std;
int LastOccurance(int arr[],int n,int ind,int target){
    if(ind==n)return -1;
    int liia=LastOccurance(arr,n,ind+1,target);
    if(arr[ind]==target && liia==-1)return ind;
    else return liia;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<LastOccurance(arr,n,0,5);
}
