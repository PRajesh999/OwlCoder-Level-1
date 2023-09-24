#include <iostream>
using namespace std;
int main()
{
    int n,m,x,y,su=0;
    cin>>n>>m>>x>>y;
    for(int i=n;i<=m;i++)
    {
        if(i%x==0 and i%y!=0)
        {
            su+=i;
        }
    }
    cout<<su;
}
