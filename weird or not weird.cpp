#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0) cout<<"weird";
    else if(n%2==0 and n>2 and n<=5) cout<<"not weird";
    else if(n%2==0 and n>6 and n<=20) cout<<"weird";
    else if(n%2==0 and n>2 and n>20) cout<<"not weird";

}
