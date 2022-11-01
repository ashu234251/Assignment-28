// 6. Create a complex class and overload assignment operator for that class.

#include<iostream>
using namespace std;
class Complex
{
       int real;
       int img;
    public:
       void setValues(int r,int i)
       {
        real=r;
        img=i;
       }
       void display()
       {
        cout<<"Real is: "<<real<<"    Imaginary is: "<<img<<endl;
       }
       Complex()
       {}
       Complex(int r,int i)
       {
        cout<<"CC called."<<endl;
        real=r;
        img=i;
       }
       Complex& operator=(Complex C)
       {
        cout<<"Operator = called."<<endl;
        real=C.real;
        img=C.img;
        return *this;
       }
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.setValues(5,6);
    c2.setValues(16,15);
    c4=c3=c2;
    c1.display();
    c2.display();
    c3.display();
    c4.display();

    return 0;
}