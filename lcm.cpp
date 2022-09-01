#include <iostream>
using namespace std;
int hcf(int a, int b)
{
    int m,n;
    m=a;
    n=b;
    while (m!=n)
    {
        if (m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
      
    }
}

int main()
{
    int a,b,l;
    cout<<"Enter 1st number = ";
    cin>>a;
    cout<<"Enter 2st number = ";
    cin>>b;
    l=(a*b)/hcf(a,b);
    cout<<"\nLCM of ["<<a<<"] and ["<<b<<"] is "<<l;
    return 0;
}