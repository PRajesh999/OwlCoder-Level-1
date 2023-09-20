#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,m;
    cin>>x>>y>>m;
    int c=pow(x,y);
    cout<<(c%m);
}
