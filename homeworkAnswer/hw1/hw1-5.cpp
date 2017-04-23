#include<iostream>
using namespace std;
void change(int &x,int &y);

void change(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
//int main()
//{
//    int a,b;
////    cout<<"Please input two numbers:";
//    cin>>a>>b;
//    if(a>b)
//        change(a,b);
//    cout<<a<<"\t"<<b<<endl;
//    return 0;
//}