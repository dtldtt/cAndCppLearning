//#include<iostream>
//using namespace std;
//int middle(int number[]);
//double middle(double number[]);
//unsigned middle(unsigned number[]);

int middle(int number[])
{
    int i,x;
    i=number[0]>number[1]?number[0]:number[1];
    x=number[2]>i?i:number[2];
    return x;
}
double middle(double number[])
{
    double i,x;
    i=number[0]>number[1]?number[0]:number[1];
    x=number[2]>i?i:number[2];
    return x;
}
unsigned middle(unsigned number[])
{
    unsigned i,x;
    i=number[0]>number[1]?number[0]:number[1];
    x=number[2]>i?i:number[2];
    return x;
}
//int main()
//{
//    int iNumber[3]={45,3,89};
//    double dNumber[3]={12.4,6,55.8};
//    unsigned uNumber[3]={345,776,565};
//    
//    cout<<"\nThe numbers are ";
//    for( int i=0;i<3;i++)
//        cout<<iNumber[i]<<"\t";
//    cout<<endl<<"the middle of them is "<<middle(iNumber)<<endl;
//    
//    cout<<"\nThe numbers are ";
//    for( int i=0;i<3;i++)
//        cout<<dNumber[i]<<"\t";
//    cout<<endl<<"the middle of them is "<<middle(dNumber)<<endl;
//    
//    cout<<"\nThe numbers are ";
//    for( int i=0;i<3;i++)
//        cout<<uNumber[i]<<"\t";
//    cout<<endl<<"the middle of them is "<<middle(uNumber)<<endl;
//    
//    return 0;
//}
