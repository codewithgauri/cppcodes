//Move all negative numbers to beginning and positive to end with constant extra space

#include <bits/stdc++.h>
using namespace std;
 void swaparray(int arr[],int n){
     int j=0;
     for(int i=0;i<n;i++)
     {
         if (arr[i]<0)
         {
             if(i!=j)
             swap(arr[i],arr[j]);
             j++;
         }
     }
 }
 void printarray(int arr[],int n){
     for (int i=0;i<n;i++){
         
         cout<<arr[i]<<" ";
     }
 }
int main()
{   int n;
    cin>>n;
    int arr[20];
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    swaparray(arr,n);
    printarray(arr,n);
    }