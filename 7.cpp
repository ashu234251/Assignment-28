// 7. Create an Integer class and overload logical not operator for that class.

#include<iostream>
using namespace std;
class Integer
{
       int i;
       int j;
    public:
       void display()
       {
        cout<<"First Value is: "<<i<<"  and Second Value is: "<<j<<endl;
       }
       Integer operator!()
       {
         Integer temp;
         temp.i=-i;
         temp.j=-j;
         return temp;
       }
       Integer(int x,int y)
       {
          cout<<"Parameterised Constructor called."<<endl;
          i=x;
          j=y;
       }
       Integer()
       {
        cout<<"Default Constructor called."<<endl;
       }
       Integer(Integer &I)
       {
        cout<<"Copy Constructor called."<<endl;
        i=I.i;
        j=I.j;
       }
};
int main()
{
    Integer i1(110,121),i2(7,21);
    i1.display();
    (!i1);
    (!i1).display();
    int i=111;
    cout<<!i<<endl;

    return 0;
}