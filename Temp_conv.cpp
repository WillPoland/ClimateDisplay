/*I want to add a function
that read int files*/

//I want to add years

// Change in global Temperature is 0.32*F per year since 1981.

#include <iostream>
//lets me use array list.
#include <list>
//lets me read and write files.
#include <fstream>
//lets me use size();
#include <iterator>

using namespace std;
//Time is it's own intity so there is a class for it.
class Time
{
  /*year won't be accessed by just any class
  just this one*/
  private:
    int year;
    double tempC;
    double tempF;
  public:
    //Default constructor
    //The Default year is 1980.
    Time()
    {
      year = 1980;
      tempC = 0;
      tempF = 0;
    }
    //mutalator Constructor
    Time(int aYear, double aTemp_C, double aTemp_F)
    {
      setYear(aYear);
      setTemp_C(aTemp_C);
      setTemp_F(aTemp_F);

    }
    //this function will set aYear to year.
    void setYear(int aYear)
    {
      year= aYear;
    }
    //returns the year.
    int getYear()
    {
      return year;
    }
    //this function will set aTemp_C to tempC.
    void setTemp_C(double aTemp_C)
    {
      tempC = aTemp_C;
    }
    //returns temperature in celcius.
    double getTemp_C()
    {
      return tempC;
    }
    //this function will set aTemp_F to tempF.
    void setTemp_F(double aTemp_F)
    {
      tempF = aTemp_F;
    }
    //returns temperature in Farenheit.
    double getTemp_F()
    {
      return tempF;
    }
};



int main()
{
  Time time;
  //intiallize list of years.
  //Time is class that the list of year are going through
  list<Time> years;

  for(int i = 1980; i <= 2025; i++)
  {
    time.setYear(i);
    years.push_back(time);
    cout<<time.getYear()<<endl;
  }

  ifstream file("1980_temp");

  double celcius;

  while(file>>celcius)
  {
    cout<<celcius<<endl;
  }
  for(int i =1; i <= 45;i++)
  {
    double a = a+ 0.18;
    double result = celcius+a;
    time.setTemp_C(result);
    cout<<time.getTemp_C()<<endl;
  }
  return 0;
}
/*Found my problem
Mr.H, No need to worry!
It had to do with declaring an object.*/
