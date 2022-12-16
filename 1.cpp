/*Write a C++ program to convert Premitive type to Complex type
Example-
int main()
{
  Complex c1;
  int x=5;
  c1=x;
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
   void setData(int real, int img)
   {
     this->real=real;
     this->img=img;
   }
   void display()
   {
     cout<<"real= "<<real<<" img= "<<img<<endl;
   }
   Complex(){}
   Complex(int real)
   {
     this->real=real;
     this->img=real;
   }
   
};

int main()
{
  Complex c1;
  int x=5;
  c1=x;
  c1.display();
  return 0;
}
