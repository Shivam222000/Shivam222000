//you can pick a elelment any number of time and you have to give
// all such combinations whose sum is k.
#include <bits/stdc++.h>
using namespace std;
void combs(vector<int>&arr,vector<int>ds,vector<vector<int>>ans,int k,int index){
    if(index==arr.size()){
        if(k==0){
            ans.push_back(ds);
        }
        return;
    }
    //pick up the element
    if(arr[index]<=k){
        ds.push_back(arr[index]);
        combs(arr,ds,ans,k-arr[index],index);
        ds.pop_back();
    }
    combs(arr,ds,ans,k,index+1);
    return;
}
 vector<vector<int>> combinations(vector<int> &candidates,int target){
        vector<vector<int>>ans;
        vector<int> ds;
        combs(candidates,ds,ans,target,0);
        return ans;
}
int main(){
   
}