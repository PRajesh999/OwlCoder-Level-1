#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    float su=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        su+=sqrt(i);
    }
    cout<<fixed<<setprecision(2)<<su;
}
