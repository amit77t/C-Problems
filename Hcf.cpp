#include<iostream>
using namespace std ;
int gcd(int a, int b)
{
    if(a==0)
    {
        return a;
    }
    if(b==0)
    {
        return b;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main()
{
    int a,b;
    cout<<"enter the two no"<<endl;
    cin>>a>>b;

    cout<<"HCF of give no. is =" <<gcd(a,b)<<endl;
    return 0;
}