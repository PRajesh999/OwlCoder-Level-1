#include <iostream>
using namespace std;
int main()
{
    int n,a,b,z;
    cin>>n>>a>>b>>z;
    for(int i=a;i<=b;i+=z)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}
