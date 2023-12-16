#include<iostream>
using namespace std;
int main()
{
    int *p=new int [10];
    cout<<"enter elements";
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    
    int largest=p[0];
    for(int i=0;i<5;i++)
    {
        if(largest<p[i])
        largest=p[i];

    }
    cout<<"largest"<<largest;
}