#include<iostream>
using namespace std;


void swap(int &a ,int &b)
{

    int temp=a;
    a=b;
    b=temp;


}

int main()
{
    int a=5;
    int b=6;

    cout<<"value before swap "<<"a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    cout<<"value after swap"<<"a: "<<a<<" b: "<<b<<endl;

    return 0;
}