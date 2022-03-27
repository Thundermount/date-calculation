#include "date.h"


int date::GetDaysInMonth() {

	return 28 + ((0x3bbeecc >> (month * 2)) & 3);
}

date date::GetNextDay() {
	if (day == GetDaysInMonth()) {
		int nextMonth;
		nextMonth = month + 1;
		int newYear = year;
		if (month == 13) {
			nextMonth = 1;
			newYear = year + 1;
		}
		return date(1, nextMonth, newYear);
	}
	else {
		return date(day + 1, month, year);
	}
}

date date::GetPreviousDay() {
	if (day == 1) {
		int prevYear = year;
		int prevMonth = month;
		int prevDay;
		if (month == 1) {
			prevMonth = 12;
			prevYear -= 1;
		}
		else {
			prevMonth -= 1;
		}

		prevDay = date(1, prevMonth, prevYear).GetDaysInMonth();

		return date(prevDay, prevMonth, prevYear);
	}
	else {
		return date(day - 1, month, year);
	}
}

int date::GetDayOfWeek() {

	int Y = year;
	if (month == 1 || month == 2) Y -= 1;
	int c = (int) Y / 100;
	int y = (int) Y % 100;
	int m = month - 2;
	if (m <= 0) {
		m += 12;
	}

	int result = ((day + (int)floor(2.6 * m - 0.2) + y + (int)floor(y / 4) + (int)floor(c / 4) - 2 * c) % 7);
	if (result <= 0) result += 7;
	return result;
}