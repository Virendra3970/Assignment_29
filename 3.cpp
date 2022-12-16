/*Create a Product class and convert Product type to item type using constructor
int main()
{
   item i1;
   Product p1;
   p1.setData(3,4);
   i1=p1;
   return 0;
}*/

#include<iostream>
using namespace std;
class Item;
class Product 
{
  private:
   int x,y;
  public:
   void setData(int a,int b)
   {
     x=a;
     y=b;
   }
   int getX()
   {
     return x;
   }
   int getY()
   {
     return y;
   }
   void display()
   {
     cout<<"x= "<<x<<" y= "<<y<<endl;
   }
};

class Item
{
  private:
   int b;
   int c;
  public:
   Item(){}
   Item(Product p)
   {
     p.setData(10,30);
     b=p.getX();
     c=p.getY();
   }
   void display()
   {
     cout<<"b= "<<b<<" c= "<<c<<endl;
   }
};

int mian()
{
  Item i1; Product p1;
  p1.setData(3,4);
  p1.display();
  i1=p1;
  i1.display();
  return 0;
}
