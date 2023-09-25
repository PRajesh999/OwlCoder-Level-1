#include <iostream>
using namespace std;
int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    for(int i=m;i<=r;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}
