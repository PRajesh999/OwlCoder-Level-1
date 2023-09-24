#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        if(i%3==0) c+=1;
    }
    cout<<c;
}
