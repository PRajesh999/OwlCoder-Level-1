//A single car can accommodate at most 4 people.
//
//N friends want to go to a restaurant for a party. Find the minimum number of cars required to accommodate all the friends
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n/4;
    int b=n%4;
    if(n%4==0) cout<<a;
    else cout<<a+1;

}
