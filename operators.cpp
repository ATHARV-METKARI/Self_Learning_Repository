#include<iostream>
using namespace std;
int main()
{

    int a ,b ,c;
//logical operator and turnary operator
    cout<<"Enter value of a b c"<<endl;
    cin>>a>>b>>c;

    cout<<"logical operators using tarnary if else"<<endl;
    (a==2 && b==1) ? cout<<"used logical && operator":
    (a==1 || b==2) ? cout<<"used logical || operator"<<endl:
    cout<<"both condition not satisfied";
//unary operators
cout<<"unary operator used"<<endl;
cout<<"a++"<<a++<<endl;
cout<<"b--"<<b--<<endl;
cout<<"!c"<<!c;
return 0;
}