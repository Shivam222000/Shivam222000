#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    void permutation(int index,vector<int>&arr,vector<vector<int>> &ans){
        if(index==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=index;i<arr.size();i++){
            swap(arr[index],arr[i]);
            permutation(index+1,arr,ans);
            swap(arr[index],arr[i]);
        }
    }
public:
    vector<vector<int>> give_permutaions(vector<int>& nums){
        vector<vector<int>> ans;
        permutation(0,nums,ans);
        return ans;
    }

};
int main(){
    Solution a;
    vector<int> arr{1,2,3,4};
    vector<vector<int>>abc=a.give_permutaions(arr);
    for(auto it:abc){
        for(auto in:it){
            cout<<in<<" ";
        }
        cout<<endl;
    }
    return 0;

}