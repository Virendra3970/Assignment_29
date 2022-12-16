/*Create a class Dollor and add necessary functions to support int to Dollor type conversion.
Example:
int main()
{
  int x=50;
  Dollor d;
  d.display();
  return 0;
}*/

#include<iostream>
using namespace std;
class Dollor
{
  private:
    int x;
  public:
    Dollor(){ cout<<"DC called"<<endl;}
    Dollor(int x)
    {
      cout<<"PC(int) called"<<endl;
      this->x=x;
    }
    void setX(int x)
    {
      cout<<"setX called"<<endl;
      this->x=x;
    }
    int getX()
    {
      cout<<"getX() called"<<endl;
      return x;
    }
    operator int()    // This function is created to convert Dollor to int
    {
      cout<<"operator int() called"<<endl;
      return x;
    }
    void display()
    {
      cout<<"Display() called"<<endl;
      cout<<x<<" $/-"<<endl;
    }
};
int main()
{
 int x=50;
 Dollor d;
 d=x;
 d.display();
 return 0;
}
