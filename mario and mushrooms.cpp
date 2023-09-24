#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%3==0) cout<<"NORMAL";
    else if((n-1)%3==0) cout<<"HUGE";
    else cout<<"SMALL";
}
