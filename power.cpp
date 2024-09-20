// power of the number
#include<iostream>
using namespace std;
int main()
{
    int power ,num,n;
    cout<<"enter the number ";
    cin>>n;
    cout<<"enter the power ";
    cin>>power;

    num=n;

    for(int i=1;i<power;i++)
    {
        num=num*n;
    }

    cout<<num;
}