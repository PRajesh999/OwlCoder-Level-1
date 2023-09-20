#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,c=0;
    cin>>m;
    while(m>0)
    {
        m=m/10;
        c++;
    }
    if(c==10)
    {
        cout<<"Valid";
    }
    else
    {
       cout<<"Invalid";
    }
}
