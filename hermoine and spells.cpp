#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b and a<c) cout<<b+c;
    else if(b<a and b<c) cout<<a+c;
    else cout<<a+b;

}
