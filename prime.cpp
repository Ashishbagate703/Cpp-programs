// check wheather prime number is there or not

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number";
    cin>>n;

    if(n<2)
    {
        cout<<"it is not prime";
        return 0;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"it is not prime";
                return 0;
            }
            
            
        }
        cout<<"it is prime";
        
        

    }
    
}