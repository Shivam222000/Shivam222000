#include <bits/stdc++.h>
using namespace std;
  vector<int> findAllOccurances(int arr[],int n,int ind,int target,int fsf){
        if(ind==n){
            vector<int> ans(fsf);
            return ans;
        }
        if(arr[ind]==target){
            vector<int> ans=findAllOccurances(arr,n,ind+1,target,fsf+1);
            ans[fsf]=ind;
            return ans;
        }
        else{
            vector<int> ans=findAllOccurances(arr,n,ind+1,target,fsf);
            return ans;
        }
  }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=findAllOccurances(arr,n,0,1,0);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}