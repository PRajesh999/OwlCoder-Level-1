#include <iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int se;
    cin>>se;
    for(i=0;i<n;i++)
    {
        if(a[i]==se) 
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"True";
    else cout<<"False";
}

