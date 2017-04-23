#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int *p=new int[n],i=0;

	do 
	{
		cin>>p[i];
		i++;
		if(i==n)
			{int *p=new int[n+10];
		     n=n+10;
		}
		
	}while(p[i-1]!=0);

    for(i=0;p[i]!=0;i++)
	{
		cout<<p[i]<<" ";
	}

	return 0;
}