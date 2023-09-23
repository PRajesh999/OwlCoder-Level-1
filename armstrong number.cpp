#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,sum=0;
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r*r*r;
        n=n/10;
    }
    if(temp==sum) cout<<"Yes";
    else cout<<"No";
}
