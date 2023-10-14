#include <iostream> 

#include<bits/stdc++.h> 

bool prime(int n){   

    if(n<=1){   

        return false;   

    }   

    for(int i=2;i<=sqrt(n);i++){   

        if(n%i==0){   

            return false;   

        }   

    }   

    return true;   

}   

using namespace std; 

int main() 

{ 

    int a,b; 

    cin>>a>>b; 

    int count=0; 

    for(int i=a;i<=b;i++){ 

        if(prime(i)){ 

            count++; 

        } 

    } 

    cout<<count<<endl; 

} 

 

 

