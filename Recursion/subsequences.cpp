#include <bits/stdc++.h>
//subsequences are all combinations contigious or not contigious bit in a specific order.
using namespace std;
void subseq(int arr[],int index,vector<int> ans,int n){

    if(index==n){
        for(auto it:ans){
            cout<<it<<" ";
        }
        if(ans.size()==0)cout<<"{}";
        cout<<endl;
        return;
    }
    ans.push_back(arr[index]);
    subseq(arr,index+1,ans,n);
    ans.pop_back();
    subseq(arr,index+1,ans,n);
}
int main(){
    int arr[]={1,3,4,5};
    vector<int> ans;
    subseq(arr,0,ans,4);
    return 0;
}