#include <iostream>
using namespace std;

bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

int NumberOfDaysFromTheBeginingOfTheYear(short Year, short Month, short Day)
{
    int TotalDays = 0;
    for (short i = 1; i < Month; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }
    TotalDays += Day;
    return TotalDays;
}

int main()
{
    short Day = ReadDay();
    short Month = ReadMonth();
    short Year = ReadYear();
    cout << "\nNumber Of day from the begining of the year is "
         << NumberOfDaysFromTheBeginingOfTheYear(Year, Month, Day) << endl;
    return 0;
}