

// Change in global Temperature is 0.18*C per year since 1981.

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


void celciusList()
{
  Time time;
  //locates the file
  ifstream file("1980_temp");
  //intiallize variable
  double celcius;
//print out data written in variable.
  double farenheit = (celcius*(9/5))+32;

  list<Time> years;

  while(file>>celcius)
  {
    time.setYear(1980);
    time.setTemp_F(farenheit);
    time.setTemp_C(celcius);
    cout<<" "<<time.getYear()<<"   |  "<<time.getTemp_C()<<"   |  "<<time.getTemp_F()<<endl;
    cout<<"================================="<<endl;
  }



  //reepeats the block of code 45 times
  for(int i =1; i <= 45;i++)
  {
    /*adds 0.18 to itself, then add it to celcius
    the result will be the arguement for setTemp_C()
    */
    double a = a+ 0.18;
    double b = b+ 0.32;
    double result = celcius+a;
    double result1 = farenheit+b;
    int result2 = 1980+i;
    time.setYear(result2);
    time.setTemp_C(result);
    time.setTemp_F(result1);
    cout<<" "<<time.getYear()<<"   |  "<<time.getTemp_C()<<"   |  "<<time.getTemp_F()<<endl;
    cout<<"================================="<<endl;
  }
}

int main()
{
  Time time;

  cout<<"           AVERAGE GLOBAL TEMPERATURE"<<endl;
  cout<<"_________________________________"<<endl;
  cout<<" Years     celcius     Farenheit"<<endl;
  cout<<"#################################"<<endl;

  cout.precision(5);
  celciusList();

  return 0;
}
