#include <iostream>
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short ReadDay()
{
    short Day;
    cout << "Please enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

sDate ReadFullDate()
{
    sDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    cout << endl;
    return Date;
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

bool isLastDay(sDate Date)
{
    short NumberOfDays = NumberOfDaysInAMonth(Date.Month, Date.Year);
    return NumberOfDays == Date.Day;
}

bool isLastMonth(sDate Date)
{
    return 12 == Date.Month;
}

int main()
{
    sDate Date = ReadFullDate();
    if (isLastDay(Date))
        cout << "Yes, Day is last day in month\n";
    else
        cout << "No, Day is not last day in month\n";

    if (isLastMonth(Date))
        cout << "Yes, Month is last Month in year\n";
    else
        cout << "No, Month is not last Month in year\n";

    return 0;
}