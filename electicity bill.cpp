#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,x=0,c;
    cin>>n;
    if(n<200)
     {
        c=n*1.20;
        cout<<"Units Consumed: "<<n<<endl;
        cout<<"Cost per Unit: 1.20"<<endl;
        cout<<fixed<<setprecision(2)<<"Bill: "<<c<<endl;
     }
    else if(n>=200 and n<400)
     {
        c=n*1.40;
        cout<<"Units Consumed: "<<n<<endl;
        cout<<"Cost per Unit: 1.40"<<endl;
        cout<<fixed<<setprecision(2)<<"Bill: "<<c<<endl;
     }
    else if(n>=400 and n<600)
     {
        c=n*1.60;
        cout<<"Units Consumed: "<<n<<endl;
        cout<<"Cost per Unit: 1.60"<<endl;
        cout<<fixed<<setprecision(2)<<"Bill: "<<c<<endl;
     }
    else if(n>=600 and n<800)
     {
        c=n*1.80;
        cout<<"Units Consumed: "<<n<<endl;
        cout<<"Cost per Unit: 1.80"<<endl;
        cout<<fixed<<setprecision(2)<<"Bill: "<<c<<endl;
     }
    else if(n>=800)
     {
        c=n*2.00;
        cout<<"Units Consumed: "<<n<<endl;
        cout<<"Cost per Unit: 2.00"<<endl;
        cout<<fixed<<setprecision(2)<<"Bill: "<<c<<endl;
     }

    if(c>400)
    {
        x=0.15*c;
        cout<<fixed<<setprecision(2)<<"Surcharge: "<<x<<endl;
    }
    else
    {
        cout<<"Surcharge: 0.00"<<endl;
    }
    cout<<fixed<<setprecision(2)<<"Total Amount: "<<c+x<<endl;

}
