#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,su=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) su+=i;
    }
    cout<<su;
}
