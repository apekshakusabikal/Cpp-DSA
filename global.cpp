#include<iostream>
using namespace std;
int c=56;
int main()
{
    int a,b,c;
    cout<<"\nEnter the value of a: ";
    cin>>a;
    cout<<"\nEnter the value of b: ";
    cin>>b;
    c=a+b;
    cout<<"\nThe sum is: "<<c;
    cout<<"\nThe global value c is: "<<::c;
    return 0;

}
