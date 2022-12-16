/*Create Product class and convert Product type to Item type using casting operator
int main()
{
  Item 11;
  Product p1;
  p1.setData(3,4);
  i1=p1;
  return 0;
}*/

#include<iostream>
using namespace std;
class Product
{
  private:
    int x,y;
  public:
    void setX(int a){x=a;}
    void setY(int a){y=a;}
    int getX(){return x;}
    int getY(){return y;}
    Product(){}
    Product(int x, int y){ this->x=x; this->y=y;}
    void setData(int a, int b)
    {
      x=a; y=b;
    }
    void display()
    {
      cout<<"x= "<<x<<" y= "<<y<<endl;
    }

};
class Item
{
  private:
    int a, b;
  public:
   void operator=(Product p)  //Casting operator
    {
      //p.setX(4);
      //p.setY(6);
      a=p.getX();
      b=p.getY();
    }
    Item(){}
    void display()
    {
     cout<<"a= "<<a<<" b= "<<b<<endl; 
    }
};

int main()
{
  Item i1;
  Product p1;
  p1.setData(4,5);
  p1.display();
  i1=p1;
  i1.display();
  return 0;
}
