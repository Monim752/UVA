#include<bits/stdc++.h>
using namespace std;
int NDM[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int NDML[]= {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool IsLeapYear(int year)
{
    return year%4 == 0 && (year%100!=0 || year%400==0);
}

int MonthToDay(int month, int year)
{
    int daysBefore = 0;
    for (int i = 0; i < month; i++)
        daysBefore += NDM[i];
    if (month > 1 && IsLeapYear(year))
        daysBefore++;
    return daysBefore;
}

int YearToDay(int year)
{
    int base = year * 365;
    int numLeapYears = year / 4 - year / 100 + year / 400;
    return base + numLeapYears;
}

int GetYearFromNumDays(int& numDays)
{
    int year = 1;
    int sizeOfYear = 365;

    while (numDays > sizeOfYear)
    {
        numDays -= sizeOfYear;
        ++year;
        sizeOfYear = (IsLeapYear(year)) ? 366 : 365;
    }

    return year;
}

int GetMonthFromNumDays(int& numDays, int year)
{
    int month = 0;
    int * numDayUsed = (IsLeapYear(year)) ? NDML : NDM;
    for (;numDays > numDayUsed[month]; ++month)
        numDays -= numDayUsed[month];
    return month + 1;
}

int main()
{
   int pday, day, month, year;
    while (cin >>pday>>day>>month>>year)
    {
        if(pday==0 && day==0 && month==0 && year==0)
            break;
        month--; year--;
        day += MonthToDay(month, year);
        day += YearToDay(year);
        day += pday;

        year = GetYearFromNumDays(day);
        month = GetMonthFromNumDays(day, year);
        cout << day << ' ' << month << ' ' << year << '\n';
    }
}
