#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "User.h"
#include "Date.h"
#include "Time.h"
using namespace std;

class Masage
{
public:
    void set_date(int d, int m, int y) { date.set_date(d, m, y);}
    Date get_date() { return date;}
    void set_time(int h, int m) { time.set_time(h, m);}
    Time get_time() { return time;}
    void set_user(User * _user) { user = _user;}
    User *get_user() { return user;}
private:
    User *user;
    Date date;
    Time time;
};

int main()
{

}