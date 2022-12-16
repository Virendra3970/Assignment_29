/*Create a Time class and take Duration in seconds. Now you need to convert seconds (i.e. in int )to Time class
Example:
int main()
{
 int duration;
 cout<<"Enter time duration in seconds."<<endl;
 cin>>duration;
 Time t1= duration;
 t1.display();
 return 0;
}*/

#include<iostream>
using namespace std;
class Time
{
  private:
   int day=0,hour=0, min=0,sec=0;
  public:
   Time(){ cout<<"DC called"<<endl;}
   Time(int d)
   {
     cout<<"PC called"<<endl;
     if(d>=60)
     {
       min=min+d/60;
       sec=d%60;
       if(min>=60)
       {
         hour=hour+min/60;
         min=min%60;
       }
       if(hour>=24)
       {
         day=day+hour/24;
         hour=hour%24;
       }
     }
     else
       sec=d;
   }
   void display()
   {
     cout<<"Display() called"<<endl;
     cout<<day<<" Days: "<<hour<<" Hours: "<<min<<" Minutes: "<<sec<<" Seconds"<<endl;
   }
};

int main()
{
  int duration;
  cout<<"Enter time in duration: ";
  cin>>duration;
  Time t1=duration;
  t1.display();
  return 0;
}
