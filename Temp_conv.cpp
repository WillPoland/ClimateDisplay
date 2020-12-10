

// Change in global Temperature is 0.18*C per year since 1981.

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
      /*this if-statement varifies
      if the year is valid or not before
      setting it*/
      if(aYear < 2026 && aYear > 1979)
      {
        year= aYear;
      }else
      {
        cout<<"Year invalid"<<endl;
      }
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
  //I decare an object for my class
  Time time;
  //locates the file
  ifstream file("1980_temp");
  //intiallize variable
  double celcius;
//print out data written in variable.
  double farenheit = (celcius*(9/5))+32;

  list<Time> years;

  //This sequence reads desplay celcius.
  while(file>>celcius)
  {
    //calls void functions in the main class from the other class.
    time.setYear(1980);
    time.setTemp_F(farenheit);
    time.setTemp_C(celcius);
    //calls the return functions in the main class from the other class.
    cout<<" "<<time.getYear()<<"    | "<<time.getTemp_C()<<"     | "<<time.getTemp_F()<<endl;
    cout<<"================================="<<endl;
  }



  //reepeats the block of code 45 times
  for(int i =1; i <= 45;i++)
  {
    /*adds 0.18 to itself, then add it to celcius
    the result will be the arguement for setTemp_C()
    */
    double a = a+ 0.18;
    /*adds 0.32 to itself, then add it to farenheit
    the result1 variable will be the arguement for setTemp_F()
    */
    double b = b+ 0.32;
    double result = celcius+a;
    double result1 = farenheit+b;
    int result2 = 1980+i;
    time.setYear(result2);
    time.setTemp_C(result);
    time.setTemp_F(result1);
    //formats the code.
    cout<<" "<<time.getYear()<<"    | "<<time.getTemp_C()<<"     | "<<time.getTemp_F()<<endl;
    cout<<"================================="<<endl;
  }
}

int main()
{
  //"\n" breaks the line.
  cout<<"    AVERAGE GLOBAL TEMPERATURE\n"<<endl;
  cout<<"    By: Will Poland           "<<endl;
  cout<<"_________________________________"<<endl;
  cout<<" Years     celcius     Farenheit"<<endl;
  cout<<"#################################"<<endl;
  //the double data can have up to 5 five decimal places.
  cout.precision(5);

  // calls the method.
  celciusList();

  return 0;
}
