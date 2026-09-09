#include<iostream>
using namespace std;
int main()
{
    int a=9,b=8;
    cout<<"\nOPERATORS IN C++";
    cout<<"\n*****************************************************Arithmetic operators****************************************************************";
    cout<<"\nthe value of a+b is: "<<a+b;
    cout<<"\nthe value of a-b is: "<<a-b;
    cout<<"\nthe value of a*b is: "<<a*b;
    cout<<"\nthe value of a/b is: "<<a/b;
    cout<<"\nthe value of a%b is: "<<a%b;
    cout<<"\nthe value of a++ is: "<<a++;
    cout<<"\nthe value of a-- is: "<<a--;
    cout<<"\nthe value of ++a is: "<<++a;
    cout<<"\nthe value of --a is: "<<--a;

    cout<<"\n****************************************************Comparison operators****************************************************************";
    cout<<"\nthe value of a==b is: "<<(a==b);
    cout<<"\nthe value of a!=b is: "<<(a!=b);
    cout<<"\nthe value of a>=b is: "<<(a>=b);
    cout<<"\nthe value of a<=b is: "<<(a<=b);
    cout<<"\nthe value of a>b is: "<<(a>b);
    cout<<"\nthe value of a<b is: "<<(a<b);

    cout<<"\n****************************************************Logical operators*******************************************************************";
    cout<<"\nthe value of this logical AND operator: "<<((a==b)&&(a<b));
    cout<<"\nthe value of this logical OR operator: "<<((a!=b)||(a>b));
    cout<<"\nthe value of this logical AND operator: "<<((a==b)&&(a<=b));
    cout<<"\nthe value of this logical OR operator: "<<((a>=b)||(a<b));

    return 0;
}
