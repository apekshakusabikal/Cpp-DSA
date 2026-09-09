#include<iostream>
using namespace std;
int main()
{
    //Personal details
    int age=20;
    string name="Apeksha";
    float height=5.4;
    char grade='A';
    cout<<"My name is: "<<name;
    cout<<"\nMy height is: "<<height;
    cout<<"\nMy age is: "<<age;
    cout<<"\nMy grade is: "<<grade;

    //SUM
    int a=4,b=5;
    cout<<"\nthe sum a+b is: "<<a+b;

    //DIFFERENCE
    int c=8,d=4;
    cout<<"\nthe difference c-d is: "<<c-d;

    //PRODUCT
    int e=5,f=15;
    cout<<"\nthe product e*f is: "<<e*f;

    //Area and perimeter of rectangle
    int length=12;
    float breadth=17;
    cout<<"\nthe perimeter of the rectangle: "<<2*(length+breadth);
    cout<<"\nthe area of the rectangle: "<<(length*breadth);

    //converting celsius into fahrenheit
    cout<<"\ntemperature in celsius is 70 degree celsius: ";
    int celsius=70;
    cout<<"\n Temperature in fahrenheit is: "<<(celsius*9/5)+32;

    //Swap using 3rd variable
    int o=34;
    int k=90;
    int temp;
    temp=o;
    o=k;
    k=temp;
    cout<<a<<" "<<b;

    //Simple interest
    int principle=5000;
    int rate=5;
    int time=2;
    cout<<"\nThe simple interest is: "<<(principle*rate*time)/100;

    //take 3 digit number and print its hundreds,tens and ones digit
    int n=298;
    int ones=n%10;
    int tens=(n/10)%10;
    int hundreds=n/100;
    cout<<"\nhundreds: "<<hundreds;
    cout<<"\ntens: "<<tens;
    cout<<"\nones: "<<ones;
    return 0;

    //take a number in seconds and convert into hours , minutes and seconds
    int seconds=457892;
    cout<<"\nHours: "<<seconds/3600;
    cout<<"\nminutes: "<<seconds/60;
    cout<<"\nseconds: "<<seconds%3600;
}
