/*
1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator
*/

#include<iostream>
using namespace std;
class Complex
{
      int real,img;
    public:
      friend ostream & operator<<(ostream &,Complex);
      friend istream & operator>>(istream &,Complex&);
};
ostream & operator<<(ostream &os,Complex C)
{
    cout<<"Complex Number is: "<<C.real<<"+"<<C.img<<"i"<<endl;
    return os;
}
istream & operator>>(istream &is,Complex &C)
{
    cout<<"----------------Entry----------------"<<endl;
    cout<<"Enter Real Part: ";
    cin>>C.real;
    cout<<"Enter Imaginary Part: ";
    cin>>C.img;
    cout<<endl;
    return is;
}

int main()
{
    Complex c1,c2,c3;
    cin>>c1>>c2;
    cout<<c1<<c2;
    return 0;
} 