/*
2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.
*/

#include<iostream>
using namespace std;

class Complex
{
       int real,img;
    public:
       void setValues(int real,int img)
       {
         this->real=real;
         this->img=img;
       }
       void display()
       {
        cout<<"Real: "<<real<<"   Img: "<<img<<endl;
       }
};
int main()
{
    Complex c1,c2;
    
    c1.setValues(131,11);
    c1.display();


    return 0;
}