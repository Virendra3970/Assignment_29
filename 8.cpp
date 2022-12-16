/*Create a Rupee class and convert it into int. And Display it.
Example:
int main()
{
  Rupee r=10;
  int x=r;
  cout<<x;
  return 0;
}*/

#include<iostream>
using namespace std;
class Rupee
{
  private:
    int x;
  public:
    void setX(int x)
    {
      cout<<"setX() called"<<endl;
      this->x=x;
    }
    int getX()
    {
      cout<<"getX() called"<<endl;
      return x;
    }
    void Display()
    {
      cout<<"Display() called"<<endl;
      cout<<x<<" Rs./-"<<endl;
    }
    Rupee(){ cout<<"DC called"<<endl; }
    Rupee(int x)
    {
      cout<<"PC called"<<endl;
      this->x=x;
    }
    operator int()
    {
      cout<<"operator int() called"<<endl;
      return x;
    }
};

int main()
{
  Rupee r=10;
  int x=r;
  cout<<x<<endl;
  return 0;
}
