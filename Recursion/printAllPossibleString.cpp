//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}

// } Driver Code Ends


/*You have to complete this function*/
void allStringPossible(string arr,int index,vector<string>&ans,string sf){
    if(index==arr.size()){
        ans.push_back(sf);
        return ;
    }
    allStringPossible(arr,index+1,ans,sf+arr[index]);
    allStringPossible(arr,index+1,ans,sf+" "+arr[index]);
    return ;
}

vector<string>  spaceString(char str[])
{   string input=str;
    
   // void subsets(string input,int index,string output,vector<string> &v)
    vector<string> ans;
    string op="";
    op+=str[0];
    allStringPossible(str,1,ans,op);
    
    return ans;
}