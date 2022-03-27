#pragma once
#include <string>

using namespace std;
class date
{
protected: int day, month, year;

public: date(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

public: date GetPreviousDay();
public: date GetNextDay();
public: int GetDayOfWeek();
	  /// <returns>The amount of days in month</returns>
	  int GetDaysInMonth();
	  
	  string ToString() {
		  return to_string(day) + "." + to_string(month) + "." + to_string(year);
	  }
	  int GetDay() {
		  return day;
	  }
	  int GetMonth() {
		  return month;
	  }
	  int GetYear() {
		  return year;
	  }
};

enum DayOfWeek
{
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

