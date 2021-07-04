#include<iostream>

using namespace std;
void Swap(int *a, int *b);

int main()
{
    int a,b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<"Before Swap: a= "<<a<<" and b= "<<b<<endl;
    Swap(&a,&b);
    cout<<"After Swap: a= "<<a<<" and b= "<<b<<endl;

}

void Swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
