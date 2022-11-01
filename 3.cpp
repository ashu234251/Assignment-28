/*
3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound.
*/

#include<iostream>
using namespace std;
class Array
{
      int a[10];
    public:
      void setArray(int n,int index)
      {
        if(index>9)
         {
          cout<<"Index out of Bound Exception."<<endl;
          exit(0);
         }
        else
          a[index]=n;
      }
      int operator[](int index)
      {
        if(index>9)
          {
           cout<<"Index Out of Bound.";
           exit(0);
          }
        else
          return a[index];
      }

};
int main()
{
    Array a1,a2,a3;
    a1.setArray(111,5);
    cout<<a1[5]<<endl;;
    cout<<a1[12];
    return 0;
}