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

bool isDatesEquale(sDate Date1, sDate Date2)
{
    return (Date1.Year != Date2.Year) ? false : (Date1.Month != Date2.Month) ? false
                                            : (Date1.Day != Date2.Day)       ? false
                                                                             : true;
}
 
int main()
{
    sDate Date1 = ReadFullDate();
    sDate Date2 = ReadFullDate();
    if (isDatesEquale(Date1, Date2))
        cout << "Yes, date1 is Equal to date2.\n";
    else
        cout << "No, date1 is not Equal to date2.\n";
    return 0;
}