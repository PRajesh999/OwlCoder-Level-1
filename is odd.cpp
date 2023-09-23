#include <iostream>
using namespace std;
int odd(int n)
{
    if(n%2!=0) return 2;
    else return 1;
}
int main()
{
    int n;
    cin>>n;
    int res=odd(n);
    cout<<res;
}
