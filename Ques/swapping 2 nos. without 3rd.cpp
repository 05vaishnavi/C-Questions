#include<iostream>
using namespace std;
int main()

{

    int a,b;
   cout<<"The swapping nos. are:"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swapping value is:"<<a<<" "<<b;
}
