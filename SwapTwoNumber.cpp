#include<iostream>
using namespace std;

void Swap(int, int);

int main()
{
    int a,b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<"Before Swap: a= "<<a<<" and b= "<<b<<endl;
    Swap(a,b);
}

void Swap(int x, int y)
{
    int c;
    c=x;
    x=y;
    y=c;
    cout<<"After Swap: a= "<<x<<" and b= "<<y<<endl;
}

