#include <cstring>
#include <string>
#include <iostream>
using namespace std;
class Calendar
{ private:
    double DayAndMonth;
   int Hour;
  
  public:
double date() { return this-> DayAndMonth;};
int currentTime() { return this->Hour;};
Calendar() {this->DayAndMonth = 01.01;};
Calendar (double dayAndMonth) {this->DayAndMonth = dayAndMonth;};
Calendar(float day) : Calendar(static_cast<double>(day)){};

Calendar (int Hour) {this->Hour = Hour;};
  
};

int main() {
Calendar defaultCurrent;
Calendar doubleCurrent(27.03);
Calendar floatCurrent(14.30f);
Calendar Hour(13);




cout<<"Current day and month "<<doubleCurrent.date()<<endl;
cout<<"Current hour "<<Hour.currentTime()<<endl;
cout<<"Current month "<<doubleCurrent.date()<<endl;
    return 0;
}
