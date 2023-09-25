#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n,s=0,p=0,i;
   cin>>n;
   for(i=1;i<=n;i++)
   {
        s+=(i*i);
   }
   for(i=1;i<=n;i++)
   {
        p+=i;
   }
   int d=p*p;
   cout<<abs(d-s);
}
