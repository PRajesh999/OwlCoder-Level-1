#include <iostream>
using namespace std;
int primes(int n)
{
    int i,c=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    if(c==1) return 1;
    else return 0;
}
int main()
{
    int x,flag=0;
    cin>>x;
    if(primes(x)) cout<<"Prime";
    else cout<<"Not Prime";
    
   
}
