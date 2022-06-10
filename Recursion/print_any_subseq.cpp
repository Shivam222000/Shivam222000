#include <bits/stdc++.h>
using namespace std;
bool subseq(int arr[],int n,int index,vector<int> ds,int sum,int k){
    
    if(index==n){
        if( sum==k){
        for(auto it:ds) cout<<it<<" ";
        cout<<endl;
        return true;
        }
       else return false;
    }
    ds.push_back(arr[index]);//when currrent index is selected
    sum+=arr[index];
    if(subseq(arr,n,index+1,ds,sum,k)==true){
        return true;
    }
    

    ds.pop_back();
    sum-=arr[index];
    if(subseq(arr,n,index+1,ds,sum,k)==true)return true;
    return false;
    
} 
int main(){
    int sum=0;
    vector<int> ans;
    int k=5;
    int arr[]={1,2,4,3,5};
    subseq(arr,5,0,ans,sum,k);
    return 0;
    
}