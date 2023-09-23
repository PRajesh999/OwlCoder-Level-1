#include <iostream>
using namespace std;
int main()
{
    int n,i,a[n];
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    int largest=0;
    for(i=0;i<n;i++)
    {
        largest=max(a[i],largest);
    }
    cout<<largest;
}
