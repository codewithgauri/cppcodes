#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0; i<n;i++)
    {
    cin>>arr[i];
    }
    reverse(arr,arr+n);
    for (int i=0;i<n;i++)
    {
    cout<<" "<<arr[i];
    
    }
}