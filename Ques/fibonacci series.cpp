// 0 1 1 2 3 5 8 13 21 34 55 
// n3=n1+n2
#include<iostream>
using namespace std;
int main()
{
     int n1=0,n2=1,n3,i,n;
    
     cout<<"enter a number upto which you want to print"<<endl;
      
     cin>>n;
     for(i=2;i<=10;i++)
     {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3;
     }
}
