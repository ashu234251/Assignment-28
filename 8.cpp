/*
8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.
*/
#include<iostream>
using namespace std;
class Coord
{
    int x,y,z;
  public:
    Coord()
    {
      cout<<"DC called."<<endl;
    }  
    Coord(int a,int b,int c)
    {
      x=a;
      y=b;
      z=c;
    }
    void display()
    {
      cout<<"x is: "<<x<<",  y is: "<<y<<", and  z is: "<<z<<". "<<endl;
    }
    Coord operator,(Coord C)
    {
      Coord temp;
      temp.x=(x,C.z);
      temp.y=(y,C.y);
      temp.z=(z,C.x);
      return temp;
    }
};
int main()
{
  Coord c1(1,2,3),c2(4,5,6),c3(7,8,9),c4;
  c1.display();
  c2.display();
  c3.display();
  c4=(c1,c2,c3);
  c4.display();

  return 0;
}