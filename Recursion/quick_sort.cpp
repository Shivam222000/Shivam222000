#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partiton(int arr[],int low,int high){
    int pivot_item=arr[low];
    int left=low;
    int right=high;
    while(left<right){
        while(arr[left]<pivot_item)left++;
        while(arr[right]>pivot_item)right--;
        if(left<right)
        swap(&arr[left], &arr[right]);
    }
    //swap(arr[low],arr[right]);
    arr[low]=arr[right];
    arr[right]=pivot_item;

    return right;

}
void quick_sort(int arr[],int low ,int high){
     int pivot;
     if(high>low){
        pivot= partiton(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);
     }
}

int main(){
   int arr[] = {1,5,2,0,9,6} ;
   quick_sort(arr,0,5);
   for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
   }
   return 0;

}
    //arr[low]=arr[right];
   // arr[right]=pivot_item;