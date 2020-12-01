/*I want to add a function
that read int files*/

//I want to add years

// Change in global Temperature is 0.32*F per year since 1981.

#include <iostream>

using namespace std;
//Time is it's own intity so there is a class for it.
class Time
{
  /*year won't be accessed by just any class
  just this one*/
  private:
    int year;
  public:
    //Default constructor
    //The Default year is 1980.
    Time()
    {
      year = 1980;
    }
    //mutalator Constructor
    Time(int aYear)
    {
      setYear(aYear);
    }
    //this function will set aYear to year.
    void setYear(int aYear)
    {
      year= aYear;
    }
    
    int getYear()
    {
      for(int year = setYear(); year <2025; year+=1)
      {
        return year;
      }
    }
};






/*int main()
{

  return 0;
}*/
