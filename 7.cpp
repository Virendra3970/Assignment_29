/*Create two classes Tiem and Minute and add required getter and setter including constructors. Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example:
int main()
{
  Time t1(2,30);
  t1.display();
  m1.display();
  m1=t1;        // fetch minute from Time
  t1.display();
  m1.display();
  return 0;
}*/

#include<iostream>
using namespace std;
class Time
{
  private:
   int hour, minute, second;
  public:
   void display()
   {
     cout<<"Display() for Time"<<endl;
     cout<<hour<<" : "<<minute<<" : "<<second<<endl;
   }
   Time(int hour, int minute, int second=0)
   {
     cout<<"PC() for Time"<<endl;
     this->hour=hour;
     this->minute=minute;
     this->second=second;
   }
   Time(){ cout<<"DC() for Time"<<endl; }
   void setTime(int hour, int minute, int second=0)
   {
     cout<<"setTime() for Time"<<endl;
     this->hour=hour;
     this->minute=minute;
     this->second=second;
   }
   int getTime()
   {
     cout<<"getTime() for Time"<<endl;
     int min;
     min=minute+hour*60;
     return min;
   }
};
class Minute
{
  private:
   int minutes;
  public:
   Time t;
   Minute(Time)
   {
     cout<<"PC(Time) for Minute"<<endl;
     t.setTime(4,25,0);
     minutes=t.getTime();
   }
   Minute()
   {
     cout<<"DC for Minute"<<endl;
     minutes=0;
   }
   void display()
   {
     cout<<"Display() for Minute"<<endl;
     cout<<minutes<<" min"<<endl;
   }   
};

int main()
{
  Time t1(2,30);
  t1.display();
  Minute m1;
  m1.display();
  m1=t1;
  t1.display();
  m1.display();
  return 0;
}
