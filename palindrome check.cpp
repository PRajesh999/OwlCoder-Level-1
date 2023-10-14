#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    string c;
    c=n;
    reverse(n.begin(),n.end());
    if(n==c) cout<<"1";
    else cout<<"0";
	return 0;
}
