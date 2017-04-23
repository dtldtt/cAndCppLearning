#include<iostream>
using namespace std;
int main()
{
    int n,*p,i;
   // cout<<"Please input a number:";
    cin>>n;
    p=new int [n];
    *p=1;
    *(p+1)=1;
    cout<<*p<<"\t"<<*(p+1)<<"\t";
    p=p+2;
    for (i=3;i<=n;i++)
    {
        *p=*(p-1)+*(p-2);
        cout<<*p<<"\t";
        if(i%5==0)
            cout<<endl;
        p++;
    }
    
    p=p-n;
    delete []p;
    
    return 0;
}
