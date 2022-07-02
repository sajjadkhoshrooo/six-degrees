#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "User.h"
#include "Masage.h"
using namespace std;

class Chat
{
public:
    vector<Masage> get_masages() { return masages;}
    void set_user1(User * _user1) { user1 = _user1;}
    User *get_user1() { return user1;}
    void set_user2(User * _user2) { user2 = _user2;}
    User *get_user2() { return user2;}
    void add_masage(Masage _masage) { masages.push_back(_masage);}
private:
    User *user1;
    User *user2;
    vector<Masage> masages;
};

int main()
{

}