#include<iostream>
using namespace std;
int main()
{
	int a,b,LCM,r;
	cout<<"enter two numbers:"<<endl;
	cin>>a>>b;
	while(true)
	{
		LCM=a;
		r=a%b;
		if(r==0)
		{
			break;
			
		}
		a=a*2;
	}
	cout<<"LCM is :"<<LCM;
}
