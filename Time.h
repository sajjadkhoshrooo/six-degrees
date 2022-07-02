#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

class Time
{
public:
    Time(int _hour, int _minute);
    Time(int _hour);
    Time() { hour = 0; minute = 0;}
    void set_time(int h, int m);
    static bool is_valid_hour(int _hour);
    static bool is_valid_minute(int _minute);
    int get_hour() { return hour; }
    int get_minute() { return minute; }

private:
    int hour;
    int minute;
};
Time::Time(int _hour, int _minute)
{
    if (!is_valid_hour(_hour) || !is_valid_minute(_minute))
    {
        cout << "Bad inputs!" << endl;
        abort();
    }
    hour = _hour;
    minute = _minute;
}
Time::Time(int _hour)
{
    if (!is_valid_hour(_hour))
    {
        cout << "Bad inputs!" << endl;
        abort();
    }
    hour = _hour;
    minute = 0;
}
bool Time::is_valid_hour(int _hour)
{
    if (_hour < 1 || _hour > 24)
        return false;
    return true;
}
bool Time::is_valid_minute(int _minute)
{
    if (_minute < 0 || _minute > 59)
        return false;
    return true;
}

int main()
{
    
}
void Time::set_time(int h, int m)
{
    if (!is_valid_hour(h) || !is_valid_minute(m))
    {
        cout << "Bad inputs!" << endl;
        abort();
    }
    hour = h;
    minute = m;
}