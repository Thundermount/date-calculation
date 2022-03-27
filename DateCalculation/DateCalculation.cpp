#include <iostream>
#include "date.h"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int day, month, year;
    cout << "Введите день\n";
    cin >> day;
    cout << "Введите месяц\n";
    cin >> month;
    cout << "Введите год\n";
    cin >> year;


    date selectedDate = date(day, month, year);
    cout << selectedDate.GetDayOfWeek() << " день недели" << endl;
    std::cout << "предыдущий день: " << selectedDate.GetPreviousDay().ToString() << endl;

    system("pause");
}