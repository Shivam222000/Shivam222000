//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
void fac(long long N,long long i,long long prev,vector<long long> &v){
    if(i*prev >N) return;
    v.push_back(i*prev);
    print_fac(N,i+1,i*prev,v);
}
vector<long long> factorialNumbers(long long N)
{
    vector<long long> v;
    long long i=1;
    long long prev=1;
    fac(N,i,prev,v);// Write Your Code here
    return v;
}

void print_fac(long long N,long long  i,long long prev,vector<long long> &v){
    if(i*prev >N) return;
    v.push_back(i*prev);
    print_fac(N,i+1,i*prev,v);
}
};

//{ Driver Code Starts.
int main()
{

int t;
cin >> t;
while (t--)
{
    long long N;
    cin>>N;
    Solution ob;
    vector<long long> ans = ob.factorialNumbers(N);
    for(auto num : ans){
        cout<<num<<" ";
    }
    cout<<endl;
    
}

return 0;
}