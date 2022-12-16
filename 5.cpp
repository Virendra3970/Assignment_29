/*Create two classes Invent1 and Invent2 and also add necessary condtructors in it. Now add functions to support Invent1 to float and Invent 1 to Invent2 type.
Example:
int main()
{
  Invent1 s1=(4,5);
  Invent2 d1;
  float tv;
  tv=s1;
  d1=s1;
  return 0;
}*/

#include<iostream>
using namespace std;
class Invent1
{
  private:
   int x,y;
  public:
   Invent1(){}
   Invent1(int x, int y)
   {
     this->x=x;
     this->y=y;
   }
   Invent1(int a){ x=a; y=a;}
   void setX(int x)
   {
     this->x=x;
   }
   void setY(int y)
   {
     this->y=y;
   }
   int getX()
   {
     return x;
   }
   int getY()
   {
     return y;
   }
   operator float()
   {
      return x+y;     // This is for s1 to float
   }
   /*operator int()
   {
     return x+y;	// This is for Invent1 to int
   }*/
   void display()
   {
   cout<<"x= "<<x<<" y="<<y<<endl;
   }
};

class Invent2
{
  private:
   int a,b;
  public:
   Invent2(){}
   Invent2(Invent1 t)
   {
     t.setX(40);
     a=t.getX();
     t.setY(10);
     b=t.getY();
   }
   void display()
   {
     cout<<"a= "<<a<<" b= "<<b<<endl;
   }
};

int main()
{
 Invent1 s1=(4,5);
// s1=4;
 s1.display();
 Invent2 d1;
 float tv;
 tv=s1;
 cout<<tv<<endl;
 d1=s1;
 d1.display();
 s1.display();
 return 0;
}

