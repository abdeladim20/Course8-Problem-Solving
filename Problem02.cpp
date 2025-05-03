#include <iostream>

using namespace std;

short ReadYear()
{
    short years;
    cout << "Enter a year: ";
    cin >> years;

    while (years < 0)
    {
        cout << "Please enter a valid year: ";
        cin >> years;
    }
    return years;
}

bool CheckIsLeapYear(short years)
{
    if (years % 400 == 0)
    {
        return true;
    }
    else if (years % 100 == 0)
    {
        return false;
    }
    else if (years % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    short years = ReadYear();

    // Leap: 1968, 2004, 2012, 1200, 1600, 2000;
    // Not Leap: 1971, 2006, 2010, 1700, 1800, 1900;
    if (CheckIsLeapYear(years))
        cout << years << " is a leap year." << endl;

    else
        cout << years << " is not a leap year." << endl;

    return 0;
}