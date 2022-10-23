#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int find_Ind(vector<int> arr,int low,int high,int k){
        int mid=(high +low)/2;
        if(arr[mid]==k)return mid;
        else if(mid>0 && arr[mid] <k&& arr[mid]>k)return mid;
        else if(high==low && arr[mid]>k )return mid;
        else if(high==low && arr[mid]<k)return mid+1;
        else if(arr[mid]>k && mid>low) return find_Ind(arr,0,mid-1,k);
        else if(arr[mid]<k && mid <high)return find_Ind(arr,mid+1,high,k);
        return mid+1;
        }    
    int searchInsertK(vector<int>arr, int n, int k)
    {
        if(arr[n-1]<k)return n;
        else if(arr[n-1]==k)return n-1;
        else if(arr[0]>=k)return 0;
        return find_Ind(arr,0,n,k);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}