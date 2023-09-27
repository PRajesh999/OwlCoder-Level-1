#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    int c,b;
    cin>>c;
    cin>>b;
    for(int i=c;i<=b;i++)
    {
        s+=a[i];
    }
    cout<<s;
}
