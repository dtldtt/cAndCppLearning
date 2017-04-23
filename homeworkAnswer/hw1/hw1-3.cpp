//37 resize_array.cpp
#include<iostream>
using namespace std;
int *growArray(int *p_values, int &size);
int main()
{
    int next_element = 0;
    int size = 3;
    int *p_values = new int [size];
    int val;
//    cout<<"please enter a number(0 to exit):";
    cin>> val;
    while (val != 0) {
        if (size == next_element+1) {
            p_values = growArray(p_values,size);
        }
        
        p_values[next_element]=val;
        next_element++;
        
//        cout<<"please enter a number(0 to exit):";
        cin>>val;
    }
    int j=0;
    while(p_values[j]!=0)
        cout<<p_values[j++]<<" ";
    
    delete []p_values;
    
    return 0;
}
int *growArray(int *p_values, int &size)
{
    int *p_new_values = new int [size*2];
    for (int i=0; i<size; i++) {
        p_new_values[i] = p_values[i];
    }
    
    size = size *2;
    delete []p_values;
    return p_new_values;
}