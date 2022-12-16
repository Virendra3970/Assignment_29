/*Write a C++ program to converrt Complex to Premitive Type.
Example:
int main()
{
  Complex c1;
  c1.setData(3,4);
  int x;
  x=c1;
  return 0;
}*/

#include<iostream>
using namespace std;
class Complex
{
  private:
   int real;
   int img;
  public:
   Complex(){}
   Complex(int ){}
   void setData(int x, int y)
   {
    real=x;
    img=y;
   }
   void display()
   {
     cout<<"real= "<<real<<" img= "<<img<<endl;
   }
   operator int()
   {
     return (real+img);
   }
};

int main()
{
 Complex c1;
 c1.setData(3,4);
 c1.display();
 int x;
 x=c1;
 cout<<x<<endl;
 return 0;
}
