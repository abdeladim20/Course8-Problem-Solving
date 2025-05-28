#include <iostream>

using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
};

enum enDateCompare
{
    Date1BeforeDate2 = -1,
    Date1EqualToDate2 = 0,
    Date1AfterDate2 = 1,
};

bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

enDateCompare CompareDates(stDate Date1, stDate Date2)
{
    if (IsDate1BeforeDate2(Date1, Date2))
        return enDateCompare::Date1BeforeDate2;

    else if (IsDate1EqualDate2(Date1, Date2))
        return enDateCompare::Date1EqualToDate2;

    return enDateCompare::Date1AfterDate2;
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

stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

int main()
{
    cout << "\nEnter Date1:";
    stDate Date1 = ReadFullDate();
    cout << "\nEnter Date2:";
    stDate Date2 = ReadFullDate();

    cout << "\nCompare result = " << CompareDates(Date1, Date2) << endl;

    return 0;
}