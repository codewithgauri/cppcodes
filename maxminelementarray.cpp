#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"enter size";
    cin>>n;
    for (int i=0;i<n;i++){
        
        cin>> arr[i];
    }
    cout<<"\nmin element is :"<<*min_element(arr,arr+n);
    cout<<"\nmax element is :"<<*max_element(arr,arr+n);
    return 0;
}