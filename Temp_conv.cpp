/*I want to add a function
that read int files*/

//I want to add years

// Change in global Temperature is 0.32*F per year since 1981.

#include <iostream>
//lets me use array list.
#include <list>
//lets me read and write files.
#include <fstream>

using namespace std;
//Time is it's own intity so there is a class for it.
class Time
{
  /*year won't be accessed by just any class
  just this one*/
  private:
    int year;
    float tempC;
    float tempF;
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
    Time(int aYear, float aTemp_C, float aTemp_F)
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
    void setTemp_C(int aTemp_C)
    {
      tempC = aTemp_C;
    }
    //returns temperature in celcius.
    int getTemp_C()
    {
      return tempC;
    }
    //this function will set aTemp_F to tempF.
    void setTemp_F(int aTemp_F)
    {
      tempF = aTemp_F;
    }
    //returns temperature in Farenheit.
    int getTemp_F()
    {
      return tempF;
    }
};



int main()
{
  //intiallize list of years.
  //Time is class that the list of year are going through
  list<Time> years;

  for(int i = 1980; i <= 2025; i++)
  {
    Time time;
    time.setYear(i);
    years.push_back(time);
    cout<<time.getYear()<<endl;
  }

  //make file reader next!

  //Declared a variable to store celcius.
  string celcius;

  ifstream file("1980_temp.txt");

  while(getline(file, celcius))
  {
    cout<<celcius;
  }
  file.close();

  return 0;
}
