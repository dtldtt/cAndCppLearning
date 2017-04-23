#include<iostream>

using namespace std;

int main()
{
	int x,y,i,j;
	
	cin>>x>>y;

	cout<<"x|\t";
	
	for(i=0;i<=y;i++)
	{
		cout<<i<<"\t";
	}

	cout<<endl;

	for(i=0;i<=y;i++)

    {

        cout.fill('-');

        cout.width(4);

        cout<<"-";

    }

    cout<<endl;

	cout<<"0|\t";

	for(i=0;i<=y;i++)
	{
		cout<<0<<"\t";
	}

	cout<<endl;

	for(i=1;i<=x;i++)
	{
		cout<<i<<"|\t";
		for(j=0;j<=y;j++)
		{
			cout<<i*j<<"\t";
		}
		cout<<endl;
	}

	return 0;
}
