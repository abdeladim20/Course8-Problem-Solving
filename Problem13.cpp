#include <iostream>
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};

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

bool isDate1Less(sDate Date1, sDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : (Date1.Month < Date2.Month) ? true
                                          : (Date1.Day < Date2.Day)       ? true
                                                                          : false;
}

int main()
{
    sDate Date1 = ReadFullDate();
    sDate Date2 = ReadFullDate();
    if (isDate1Less(Date1, Date2))
        cout << "Yes, date1 is less than date2.\n";
    else
        cout << "No, date1 is not less than date2.\n";
    return 0;
}