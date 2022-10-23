//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
      int min=INT_MAX;
      int max=INT_MIN;
      for(int i=0;i<r;i++){
        if(matrix[i][0]<min)min=matrix[i][0];

        if(matrix[i][c-1]>max) max=matrix[i][c-1];
      
      }

       
      int mid=(min +max)/2;
       
      
    }
};

//{ Driver Code Starts.

int main()
{
   
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    
    return 0;
    }

// } Driver Code Ends