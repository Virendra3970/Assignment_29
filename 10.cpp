/*Create two classes Rupee and Dollor and add necessary functions to support Rupee to Dollor and Dollor to Rupee conversion.
Example:
float main()
{
  Rupee r=23;
  Dollor d=r;  //Rupee to Dollor conversion
  
  d.display();
  r.display();
  
  return 0;
}*/
#include<iostream>
using namespace std;
class Dollar;
class Rupee
{
  private:
  float x;
  public:
   Rupee(){ cout<<"DC called for Rupee"<<endl;}
   void display()
   {
     cout<<"Display() called for Rupee"<<endl;
     cout<<x<<" Rs/-"<<endl;
   }
   Rupee(float x)
   {
     cout<<"PC(float) called for Rupee"<<endl;
     this->x=x;
   }
   void setX(float x)
   {
     cout<<"setX() called for Rupee"<<endl;
     this->x=x;
   }
   float getX()
   {
     cout<<"getX() called for Rupee"<<endl;
     return x;
   }
   
};
class Dollar
{
 private:
  float x;
 public:
  Dollar(Rupee &r1)
  {
    cout<<"PC(Rupee) called for Dollar"<<endl;
    r1.setX(1239.3);
    x=r1.getX()/82.62;
  }
  Dollar(float x)
  {
    cout<<"PC(float) called for Dollar"<<endl;
    this->x=x;
  }
  operator Rupee()
  {
    cout<<"operator Rupee() called for Dollar"<<endl;
    return x*82.62;
  }
  void display()
   {
     cout<<"Display() called for Dollar"<<endl;
     cout<<x<<" $/-"<<endl;
   }
   /*This fuction is automatically defined by compiler 
   operator float()
   {
     cout<<"opeartor float() called for Dollar"<<endl;
     return x;
   }*/
   Dollar(){}
};
int main()
{
 Rupee r=23;
 Dollar d=r;  //Ruppe to Dollar
 d.display();
 r.display();
 
 d=(float)15;
 r=d;    	//Dollar to Rupee
 d.display();
 r.display();
 return 0;
}
