#include<iostream>
using namespace std;
int main()
{
        int i,n;   
        cout<<"enter a number"<<endl;
        cin>>n;
        for(i=2;i<n;vi++)
        {
          if(n%i==0)
          {
            cout<<"number is not prime"<<endl;
            break;
          }

        }  
        if(i==n)
        {
            cout<<"number is prime"<<endl;
        }               
}
