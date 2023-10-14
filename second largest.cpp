#include<bits/stdc++.h> 
using namespace std; 
int secondlargest(int arr[],int n) 
{ 
    int l=arr[0]; 
	int sl=-1; 
	for(int i=0;i<n;i++){ 
    if(arr[i]>l){ 
      sl=l; 
      l=arr[i]; 
     }else if(arr[i]<l && arr[i]>sl){ 
            sl=arr[i]; 
 } 
} 
return sl; 
} 
int main() 
{ 
    int n; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++) 
    { 
        cin>>arr[i]; 
    } 
    cout<<secondlargest(arr,n); 
} 
