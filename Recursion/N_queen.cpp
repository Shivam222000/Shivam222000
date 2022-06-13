#include <bits/stdc++.h>
using namespace std;
class Solution{
private:
public:
bool isSafe(int row,int col,vector<string> board,int N){
   int duprow=row;
   int dupcol=col;
   //check for if row is empty
    while(col>=0){
        if(board[row][col]=='Q') return false;
        col--;
    }
    row=duprow;
    col=dupcol;
    //check for upper diagonal if it is empty
    while(col<=0 && row<=0){
        if(board[row][col]=='Q')return false;
        col--;
        row--;
    }
    row=duprow;
    col=dupcol;
    //check for lower diagonal if it is empty
    while(col>=0 && row<N){
        if(board[col][row]=='Q')return false;
        col--;
        row++;
    }
    return true;
}
void solve(int col,vector<string>board,vector<vector<string>>ans,int N){
    if(col==N){
        ans.push_back(board);
        return;
    }
    
    for(int i=0;i<N;i++){
        int row=i;
        if(isSafe(row,col,board,N)){
            board[row][col]='Q';
            solve(col+1,board,ans,N);
            board[row][col]='-';
        }
    }
    return;
}
public:
    vector<vector<string>> N_queen(int N){
        vector<vector<string>> ans;
        vector<string> board(N);
        string s(N,'-');
        for(int i=0;i<N;i++){
            board[i] = s;
        }
        solve(0,board,ans,N);
        return ans;
    }

};
int main(){

}