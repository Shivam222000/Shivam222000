#include <bits/stdc++.h>
using namespace std;
void TargetSumSubset(int arr[],int n,int index,int sos,string set,int target){
    if(index>=n){
        return;
    }
    else if(sos==target){
        cout<<set<<endl;
        return;
    }
    TargetSumSubset(arr,n,index+1,sos+arr[index],set+to_string(arr[index])+" ",target);
    TargetSumSubset(arr,n,index+1,sos,set,target);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    TargetSumSubset(arr,n,0,0,"",target);

}