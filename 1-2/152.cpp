#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[100];;

	cin>>n;

	a[1]=a[2]=a[0]=1;

	for(i=3;i<=n;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}

	for(j=1;j<=n;j++)
	{
		cout<<a[j]<<"\t";
		if(j%5==0)
			cout<<endl;
	}

	return 0;
}