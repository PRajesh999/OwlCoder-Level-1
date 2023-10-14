#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string x,y; 
    cin>>x>>y; 
    int count_x=0,count_y=0; 
    for(int i=0;i<x.length();i++){ 
        if(x[i]>y[i]){ 
            count_x++; 
        }else if(x[i]<y[i]){ 
            count_y++; 
        } 
    } 
    if(count_x>count_y){ 
        cout<<"Calvin"<<endl; 
    }else if(count_x<count_y){ 
        cout<<"Django"<<endl; 
    }else{ 
        cout<<"Tie"<<endl; 
    } 
}
