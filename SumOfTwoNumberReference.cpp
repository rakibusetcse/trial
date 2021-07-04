#include<iostream>
using namespace std;

int Sum(int *, int *, int *);

int main()
{
    int a,b,z=0;
    cout<<"Enter two numbers: :"<<endl;
    cin>>a>>b;
    cout<<"Before Sum: "<<z<<endl;
    Sum(&a,&b,&z);
    cout<<"Total :"<<z;
}


int Sum(int *x, int *y, int *z)
{
    *z= *x+*y;
    return *z;
}
