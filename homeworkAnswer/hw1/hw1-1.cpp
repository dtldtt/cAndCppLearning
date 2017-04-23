#include<iostream>
using namespace std;
int main()
{
    int i,j,x,y;
//    cout<<"Please input the line:";
    cin>>x;
//    cout<<"Please input the row:";
    cin>>y;
    
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
    for(j=0;j<=x;j++)
    {
        cout<<j<<"|\t";
        for(i=0;i<=y;i++)
        {
            cout<<i*j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}