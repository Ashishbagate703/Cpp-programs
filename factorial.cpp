//find the factorial number

#include<iostream>
using namespace std;
int main()
{
     int n,fact=1;
    cout<<"enter the number";
    cin>>n;

    if(n<0)
    {
        cout<<"doesn't exist";
    }
    else
    {

        for( int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    cout<<fact;
    }


}
