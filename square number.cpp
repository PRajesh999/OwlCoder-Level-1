#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float m=sqrt(n);
    if(m==int(m)) cout<<"True";
    else cout<<"False";
}
