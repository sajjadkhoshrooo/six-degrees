#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "Date.h"
using namespace std;
 
class User
{
public:
    User(string _id, string _pass, string _phone, Date _bd, string _email);
    void set_id(string _id) { id = _id; }
    string get_id() { return id; }
    void set_password(string _pass) { password = _pass; }
    string get_password() { return password; }
    void set_phoneNumber(string _phoneNumber) { phoneNumber = _phoneNumber; }
    string get_phoneNumber() { return phoneNumber; }
    void set_birthDate(Date _bd) { birthDate = _bd; }
    Date get_birthDate() { return birthDate;}
    void set_email(string _email) { email = _email;}
private:
    string id;
    string password;
    string phoneNumber;
    Date birthDate;
    string email;
};
User::User(string _id, string _pass, string _phone, Date _bd, string _email) : birthDate(_bd)
{
    set_id(_id);
    set_password(_pass);
    set_phoneNumber(_phone);
    set_email(_email);
}
