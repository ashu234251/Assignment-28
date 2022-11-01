/*
9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.
*/

#include<iostream>
using namespace std;
class Integer
{
      int x;
    public:
      void display()
      {
        cout<<"Value is: "<<x<<endl;
      }
      Integer(int a)
      {
        x=a;
      }
      operator int()
      {
        return x;
      }
};
int main()
{
    Integer i1(111),i2(211);
    int a;
    a=i1;
    cout<<"Typecasted Value is: "<<a<<endl;

    return 0;
}