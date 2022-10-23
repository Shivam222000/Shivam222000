#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n,ind1,ind2,flag;
  cin>>n;
  int arr[n];
  flag=1;
  for(int i=0;i<n;i++){
   cin>>arr[i];
  }
  if(arr[0]%2==0)ind1=0;
  else ind1=1;
  if(arr[1]%2==0)ind2=0;
  else ind2=1;
  for(int i=2;i<n;i++){
   
   if(i%2==0 && arr[i]%2==ind1){
    continue;
   }
   else if(i%2==1 && arr[i]%2==ind2){
    continue;
   }
   else{
    flag=0;
    break;
   }
  }
  if(flag==1)
  cout<<"yes"<<endl;
  else cout<<"no"<<endl;
  }
  
  return 0;
  
 }
