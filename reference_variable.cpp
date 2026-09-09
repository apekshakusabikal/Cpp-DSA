#include<iostream>
using namespace std;
int main()
{
    int x=90;
    int & ref=x;
    cout<<"\nx="<<x;
    cout<<"\nref="<<ref;
    return 0;
}
