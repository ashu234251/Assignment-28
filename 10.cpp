#include<iostream>
using namespace std;
class Distance
{
    private:
       int feet,inches;
    public:
       Distance()
       {
       }
       Distance(int f,int i)
       {
        feet=f;
        inches=i;
       }
       void display()
       {
        cout<<"Feet= "<<feet<<"   Inches= "<<inches<<endl;
       }
       /*
       Distance operator()(int a,int b,int c)
       {
          Distance temp;
          temp.feet=a+c+5;
          temp.inches=a+b+15;
          return temp;
       }
       */
       Distance operator()(int a,int b,int c)
       {
          Distance temp;
          temp.feet=a+c+5;
          temp.inches=a+b+15;
          return temp;
       }

};

int main()
{
    Distance d1(5,10);
    Distance d2;
    d2=d1(10,20,30);              // ()(d1,10,20,30);
    d1.display();
    d2.display();
    return 0;
}