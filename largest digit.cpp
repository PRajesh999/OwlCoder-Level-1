#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,largest=0;
    cin>>n;
    int temp=n;
    while(n!=0)
    {
        r=n%10;
        largest=max(r,largest);
        n=n/10;
    }
    cout<<largest;
}
